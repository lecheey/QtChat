#include "msglistwidget.h"
#include "ui_msglistwidget.h"

MsgListWidget::MsgListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MsgListWidget)
{
    ui->setupUi(this);
}

MsgListWidget::~MsgListWidget()
{
    delete ui;
}

void MsgListWidget::setDatabase(std::shared_ptr<Database> dbPtr){
    m_dbPtr = dbPtr;
}

void MsgListWidget::showPubMsgList(){
    auto chatMessages = m_dbPtr->getChatMessages();
    QString pubchat;
    for(const auto &msg : chatMessages){
        pubchat.append(QString::fromStdString(msg) + "\n");
    }
    if(ui->msgListBrowser->toPlainText() != pubchat){
        ui->msgListBrowser->setText(pubchat);
    }
}

void MsgListWidget::showPvtMsgList(){
    auto privateMessages = m_dbPtr->getPrivateMessage();
    QString pvtchat;
    for(const auto &msg : privateMessages){
        QString prefix;
        prefix = QString::fromStdString(msg.getTime()) + " <" + QString::fromStdString(msg.getSender()) +
                 "> " + tr("said to") +
                 " <" + QString::fromStdString(m_dbPtr->getUserName(msg.getDest())) +
                 ">: ";
        pvtchat.append(prefix + QString::fromStdString(msg.getText()) + "\n");
    }
    if(ui->msgListBrowser->toPlainText() != pvtchat){
        ui->msgListBrowser->setText(pvtchat);
    }
}

void MsgListWidget::showLogList(){
    auto logMessages = m_dbPtr->getLogMessages();
    QString logs;
    for(const auto &msg : logMessages){
        logs.append(QString::fromStdString(msg) + "\n");
    }
    if(ui->msgListBrowser->toPlainText() != logs){
        ui->msgListBrowser->setText(logs);
    }
}

void MsgListWidget::showConfig(){
    ui->msgListBrowser->setText("Your configs will be displayed here");
}
