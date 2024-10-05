#include "mainwindow.h"
#include "startscreen.h"
#include "ui_mainwindow.h"

int MainWindow::kInstanceCount = 0;

MainWindow::MainWindow(int userId,
                       QString userName,
                       std::shared_ptr<Database> dbPtr,
                       QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_userId(userId),
    m_userName(userName)
{
    ui->setupUi(this);
    kInstanceCount++;  

    ui->userNameLabel->setText(m_userName);

    if(dbPtr)
        m_dbPtr = dbPtr;
    else
        m_dbPtr = make_shared<Database>();

    if(kInstanceCount == 1){
        m_dbPtr->addUser("Group", "Group");
    }

    tb = new QListWidget();
    showDockList(tb);
    connect(tb, &QListWidget::itemClicked, this, &MainWindow::on_userList_clicked);

    auto timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::showMsgList);
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
    kInstanceCount--;
    if(kInstanceCount <= 0)
        qApp->exit(0);
}

MainWindow *MainWindow::createClient(std::shared_ptr<Database> dbPtr)
{
    StartScreen s(dbPtr);
    auto result = s.exec();
    if(result == QDialog::Rejected)
    {
        return nullptr;
    }
    auto w = new MainWindow(s.userId(), s.userName(), s.getDatabase());
    w->setAttribute(Qt::WA_DeleteOnClose);
    return w;
}


void MainWindow::on_userMsgLine_returnPressed()
{
    on_sendMsgButton_clicked();
}


void MainWindow::on_sendMsgButton_clicked()
{
    if(m_targetName != nullptr){
        m_dbPtr->addPrivateMessage(m_userName.toStdString(),
                                   m_targetName.toStdString(),
                                   ui->userMsgLine->text().toStdString(),
                                   QDateTime::currentDateTime().time().toString().toStdString());
    }
    ui->userMsgLine->clear();
}


void MainWindow::on_actionAddnew_triggered()
{
    auto w = createClient(m_dbPtr);
    if(w)
        w->show();
}


void MainWindow::on_actionLog_out_triggered()
{
    this->close();
}


void MainWindow::on_actionShow_friend_list_triggered()
{
    showDockList(tb);
}

void MainWindow::on_userList_clicked(QListWidgetItem* _i)
{
    m_targetName = _i->text();
    showMsgList();
    if(m_targetName == m_userName){
        ui->targetUseLabel->setText(tr("Saved messages"));
    }
    else{
        ui->targetUseLabel->setText(m_targetName);
    }
}

void MainWindow::showMsgList(){
    auto privateMessages = m_dbPtr->getPrivateMessage();
    QString chat;
    for(const auto &msg : privateMessages){
        QString prefix;
        if(m_targetName == "Group" &&
           m_targetName == QString::fromStdString(m_dbPtr->getUserName(msg.getDest()))){
            prefix = QString::fromStdString(msg.getTime()) +
                        " " + QString::fromStdString(msg.getSender()) + ": ";
        }
        else if(m_userName == QString::fromStdString(msg.getSender()) &&
           m_targetName == QString::fromStdString(m_dbPtr->getUserName(msg.getDest()))){
            prefix = QString::fromStdString(msg.getTime()) +
                        " " + m_userName + ": ";
        }
        else if(m_targetName == QString::fromStdString(msg.getSender()) &&
                m_userName == QString::fromStdString(m_dbPtr->getUserName(msg.getDest()))){
            prefix = QString::fromStdString(msg.getTime()) +
                    " " + m_targetName + ": ";
        }
        else{ continue; }
        chat.append(prefix + QString::fromStdString(msg.getText()) + "\n");
    }
    if(ui->textBrowser->toPlainText() != chat){
        ui->textBrowser->setText(chat);
    }
}

void MainWindow::showDockList(QListWidget *tb){
    updateUserList(tb);

    QDockWidget *dock = new QDockWidget(this);
    dock->setWidget(tb);

    this->addDockWidget(Qt::LeftDockWidgetArea, dock, Qt::Vertical);
}

void MainWindow::updateUserList(QListWidget *tb){
    auto userList = m_dbPtr->getUserList();
    tb->clear();
    for(auto user : userList){
        tb->addItem(QString::fromStdString(user));
    }
    tb->setCurrentRow(0);
}
