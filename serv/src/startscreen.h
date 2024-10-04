#ifndef STARTSCREEN_H
#define STARTSCREEN_H

#include <QDialog>
#include <QMessageBox>
#include <QDateTime>
#include <memory>
#include "Database.h"
#include "config.h"

namespace Ui {
class StartScreen;
}

class StartScreen : public QDialog
{
    Q_OBJECT

public:
    explicit StartScreen(std::shared_ptr<Database> dbPtr = nullptr,
                         std::shared_ptr<myConfig> cfgPtr = nullptr,
                         QWidget *parent = nullptr);
    ~StartScreen();

    int userId() const;
    QString userName() const;

    std::shared_ptr<Database> getDatabase() const;
    std::shared_ptr<myConfig> getConfig() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::StartScreen *ui;
    int m_userId;
    QString m_userName;
    std::shared_ptr<Database> m_dbPtr;
    std::shared_ptr<myConfig> m_cfgPtr;
};

#endif // STARTSCREEN_H
