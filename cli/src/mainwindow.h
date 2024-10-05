#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QDialog>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QTimer>
#include <QDateTime>
#include <QDockWidget>
#include <QLayout>
#include <memory>

#include "Database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int userId,
                        QString userName,
                        std::shared_ptr<Database> dbPtr = nullptr,
                        QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* createClient(std::shared_ptr<Database> dbPtr = nullptr);

    static int kInstanceCount;

    void showDockList(QListWidget *tb);
    void updateUserList(QListWidget *tb);
    void showMsgList();

private slots:
    void on_userMsgLine_returnPressed();
    void on_sendMsgButton_clicked();
    void on_actionAddnew_triggered();
    void on_actionLog_out_triggered();
    void on_actionShow_friend_list_triggered();
    void on_userList_clicked(QListWidgetItem* _i);

private:
    Ui::MainWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
    int m_userId;
    QString m_userName;
    QString m_targetName;

    QListWidget *tb{};
};
#endif // MAINWINDOW_H
