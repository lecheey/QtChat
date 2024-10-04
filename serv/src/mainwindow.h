#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include "Database.h"
#include "config.h"

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

    static MainWindow* createClient(std::shared_ptr<Database> m_dbPtr = nullptr,
                                    std::shared_ptr<myConfig> m_cfgPtr = nullptr);
    void getUsrList();
    void getPubMsgList();
    void getPvtMsgList();

private slots:
    void on_userListButton_clicked();
    void on_pubMsgListButton_clicked();
    void on_pvtMsgListButton_clicked();
    void on_logListButton_clicked();

    void onGetInfo(QString username);
    void onDisconnected(QString username);
    void onBanned(QString username);
    void onUnblocked(QString username);

    void on_configButton_clicked();

private:
    Ui::MainWindow *ui;
    std::shared_ptr<Database> m_dbPtr;
    std::shared_ptr<myConfig> m_cfgPtr;
    QString m_userName;
    int m_userId;

};
#endif // MAINWINDOW_H
