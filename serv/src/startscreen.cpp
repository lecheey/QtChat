#include "startscreen.h"
#include "ui_startscreen.h"
#include <QMessageBox>
#include <QDateTime>

StartScreen::StartScreen(std::shared_ptr<Database> dbPtr,
                         QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScreen)
{
    ui->setupUi(this);

    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();

    m_dbPtr->addUser("admin", "admin");
    m_dbPtr->addLogMessage("system", "server is starting", QDateTime::currentDateTime().time().toString().toStdString()); // pvt

}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::on_buttonBox_accepted()
{
    auto userId = m_dbPtr->checkPassword(ui->loginEdit->text().toStdString(),
                                         ui->passwordEdit->text().toStdString());
    if(userId == -1){
        QMessageBox::critical(this, tr("Error"), tr("Password is wrong"));
        return;
    }
    m_dbPtr->addLogMessage("system", "server is ready", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
    m_dbPtr->addLogMessage("system", "admin logged in", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
    m_userId = userId;
    m_userName = ui->loginEdit->text();
    accept();
}


void StartScreen::on_buttonBox_rejected()
{
    m_dbPtr->addLogMessage("system", "exit", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
    reject();
}

std::shared_ptr<Database> StartScreen::getDatabase() const
{
    return m_dbPtr;
}

QString StartScreen::userName() const
{
    return m_userName;
}

int StartScreen::userId() const
{
    return m_userId;
}

