#ifndef MSGLISTWIDGET_H
#define MSGLISTWIDGET_H

#include <QWidget>
#include <memory>
#include "Database.h"

namespace Ui {
class MsgListWidget;
}

class MsgListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MsgListWidget(QWidget *parent = nullptr);
    ~MsgListWidget();

    void setDatabase(std::shared_ptr<Database> dbPtr);
    void showPubMsgList();
    void showPvtMsgList();
    void showLogList();
    void showConfig();
private:
    Ui::MsgListWidget *ui;
    std::shared_ptr<Database> m_dbPtr;
};

#endif // MSGLISTWIDGET_H
