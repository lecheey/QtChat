/********************************************************************************
** Form generated from reading UI file 'msglistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGLISTWIDGET_H
#define UI_MSGLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MsgListWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *msgListBrowser;

    void setupUi(QWidget *MsgListWidget)
    {
        if (MsgListWidget->objectName().isEmpty())
            MsgListWidget->setObjectName("MsgListWidget");
        MsgListWidget->resize(954, 656);
        horizontalLayout = new QHBoxLayout(MsgListWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        msgListBrowser = new QTextBrowser(MsgListWidget);
        msgListBrowser->setObjectName("msgListBrowser");

        horizontalLayout->addWidget(msgListBrowser);


        retranslateUi(MsgListWidget);

        QMetaObject::connectSlotsByName(MsgListWidget);
    } // setupUi

    void retranslateUi(QWidget *MsgListWidget)
    {
        MsgListWidget->setWindowTitle(QCoreApplication::translate("MsgListWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MsgListWidget: public Ui_MsgListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGLISTWIDGET_H
