#include "userlistwidget.h"
#include "ui_userlistwidget.h"

UserListWidget::UserListWidget(QWidget *parent) :
                               QWidget(parent), ui(new Ui::UserListWidget){
    ui->setupUi(this);
}

UserListWidget::~UserListWidget(){
    delete ui;
}

void UserListWidget::setDatabase(std::shared_ptr<Database> dbPtr){
    m_dbPtr = dbPtr;
}

void UserListWidget::showUserList(){
    ui->userListW->clear();
    auto userList = m_dbPtr->getUserList();
    for(auto user : userList){
        ui->userListW->addItem(QString::fromStdString(user));
    }
    ui->userListW->setCurrentRow(0);
}

void UserListWidget::on_getUserInfo_clicked()
{
    emit getinfo(ui->userListW->currentItem()->text());
}


void UserListWidget::on_disconnectUser_clicked()
{
    emit disconnected(ui->userListW->currentItem()->text());
}


void UserListWidget::on_banUser_clicked()
{
    emit banned(ui->userListW->currentItem()->text());
}


void UserListWidget::on_unblockUser_clicked()
{
    emit unblocked(ui->userListW->currentItem()->text());

}

