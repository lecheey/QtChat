#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startscreen.h"

#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QListWidget>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(int userId,
                       QString userName,
                       std::shared_ptr<Database> dbPtr,
                       QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_userId(userId),
    m_userName(userName){

    ui->setupUi(this);

    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();

    ui->userWidget->setDatabase(m_dbPtr);
    ui->msgWidget->setDatabase(m_dbPtr);

    // block for tests
    // users
    m_dbPtr->addUser("ivan", "ivan");
    m_dbPtr->addUser("jane", "jane");
    //m_dbPtr->loginUser("ivan");
    //messages
    m_dbPtr->addChatMessage("ivan", "hello", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
    m_dbPtr->addChatMessage("jane", "hi", QDateTime::currentDateTime().time().toString().toStdString()); // pvt
    m_dbPtr->addPrivateMessage("ivan", "jane", "this is a private msg", QDateTime::currentDateTime().time().toString().toStdString()); // pub
    // end

    connect(ui->userWidget, &UserListWidget::getinfo, this, &MainWindow::onGetInfo);
    connect(ui->userWidget, &UserListWidget::disconnected, this, &MainWindow::onDisconnected);
    connect(ui->userWidget, &UserListWidget::banned, this, &MainWindow::onBanned);
    connect(ui->userWidget, &UserListWidget::unblocked, this, &MainWindow::onUnblocked);
}

MainWindow::~MainWindow(){
    delete ui;
    qApp->exit(0);
}

MainWindow *MainWindow::createClient(std::shared_ptr<Database> dbPtr)
{
    StartScreen s(dbPtr);
    auto result = s.exec();
    if(result == QDialog::Rejected){
        return nullptr;
    }
    auto w = new MainWindow(s.userId(), s.userName(), s.getDatabase());
    w->setAttribute(Qt::WA_DeleteOnClose);
    return w;
}


void MainWindow::on_userListButton_clicked(){
    ui->userWidget->showUserList();
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pubMsgListButton_clicked()
{
    ui->msgWidget->showPubMsgList();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pvtMsgListButton_clicked()
{
    ui->msgWidget->showPvtMsgList();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_logListButton_clicked()
{
    ui->msgWidget->showLogList();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_configButton_clicked()
{
    ui->msgWidget->showConfig();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::onGetInfo(QString username)
{
    QMessageBox::information(this, tr("Status"),
                QString::fromUtf8(m_dbPtr->getUserStat(username.toStdString())));
    return;
}

void MainWindow::onDisconnected(QString username)
{
    m_dbPtr->logoutUser(username.toStdString());
    QMessageBox::information(this, tr("Status"), tr("User was disconnected"));
    return;
}

void MainWindow::onBanned(QString username)
{
    m_dbPtr->banUser(username.toStdString());
    QMessageBox::information(this, tr("Status"), tr("User was banned"));
    return;
}

void MainWindow::onUnblocked(QString username)
{
    m_dbPtr->unblockUser(username.toStdString());
    QMessageBox::information(this, tr("Status"), tr("User was returned from ban"));
    return;
}

