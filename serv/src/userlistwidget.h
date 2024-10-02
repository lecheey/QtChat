#ifndef USERLISTWIDGET_H
#define USERLISTWIDGET_H

#include <QWidget>
#include <memory>
#include "Database.h"

namespace Ui {
class UserListWidget;
}

class UserListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserListWidget(QWidget *parent = nullptr);
    ~UserListWidget();
    void setDatabase(std::shared_ptr<Database> dbPtr);
    void showUserList();

signals:
    void getinfo(QString username);
    void disconnected(QString username);
    void banned(QString username);
    void unblocked(QString username);

private slots:
    void on_getUserInfo_clicked();
    void on_disconnectUser_clicked();
    void on_banUser_clicked();

    void on_unblockUser_clicked();

private:
    Ui::UserListWidget *ui;
    std::shared_ptr<Database> m_dbPtr;
};

#endif // USERLISTWIDGET_H
