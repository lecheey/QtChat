#include "startscreen.h"
#include "ui_startscreen.h"

StartScreen::StartScreen(std::shared_ptr<Database> dbPtr,
                         std::shared_ptr<myConfig> cfgPtr,
                         QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScreen)
{
    ui->setupUi(this);

    if(cfgPtr)
        m_cfgPtr = cfgPtr;
    else
        m_cfgPtr = make_shared<myConfig>();

    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();

    m_dbPtr->addUser("admin", "admin");
    m_dbPtr->addLogMessage("system", "Server is starting", QDateTime::currentDateTime().time().toString().toStdString()); // pvt

}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::on_buttonBox_accepted()
{
    m_dbPtr->addLogMessage("system", "Attempting to enter the server", QDateTime::currentDateTime().time().toString().toStdString());

    if(ui->loginEdit->text().toStdString() != m_cfgPtr->getAdmin().toStdString()){
        QMessageBox::critical(this, tr("Error"), tr("This user is not admin"));
        m_dbPtr->addLogMessage("system", "This user is not admin", QDateTime::currentDateTime().time().toString().toStdString());
        return;
    }

    auto userId = m_dbPtr->checkPassword(ui->loginEdit->text().toStdString(),
                                         ui->passwordEdit->text().toStdString());
    if(userId == -1){
        QMessageBox::critical(this, tr("Error"), tr("Password is wrong"));
        m_dbPtr->addLogMessage("system", "Incorrect password", QDateTime::currentDateTime().time().toString().toStdString());
        return;
    }
    m_dbPtr->loginUser(ui->loginEdit->text().toStdString());

    m_userId = userId;
    m_userName = ui->loginEdit->text();

    m_dbPtr->addLogMessage("system", "Admin successfully logged in", QDateTime::currentDateTime().time().toString().toStdString());
    m_dbPtr->addLogMessage("system", "Server is ready", QDateTime::currentDateTime().time().toString().toStdString());

    accept();
}


void StartScreen::on_buttonBox_rejected()
{
   // m_dbPtr->addLogMessage("system", "exit", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
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

