/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../src/msglistwidget.h"
#include "../../src/userlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *userListButton;
    QPushButton *pubMsgListButton;
    QPushButton *pvtMsgListButton;
    QPushButton *logListButton;
    QPushButton *configButton;
    QStackedWidget *stackedWidget;
    UserListWidget *userWidget;
    MsgListWidget *msgWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1015, 615);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        userListButton = new QPushButton(centralwidget);
        userListButton->setObjectName("userListButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userListButton->sizePolicy().hasHeightForWidth());
        userListButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        userListButton->setFont(font);

        verticalLayout->addWidget(userListButton);

        pubMsgListButton = new QPushButton(centralwidget);
        pubMsgListButton->setObjectName("pubMsgListButton");
        sizePolicy.setHeightForWidth(pubMsgListButton->sizePolicy().hasHeightForWidth());
        pubMsgListButton->setSizePolicy(sizePolicy);
        pubMsgListButton->setFont(font);

        verticalLayout->addWidget(pubMsgListButton);

        pvtMsgListButton = new QPushButton(centralwidget);
        pvtMsgListButton->setObjectName("pvtMsgListButton");
        sizePolicy.setHeightForWidth(pvtMsgListButton->sizePolicy().hasHeightForWidth());
        pvtMsgListButton->setSizePolicy(sizePolicy);
        pvtMsgListButton->setFont(font);

        verticalLayout->addWidget(pvtMsgListButton);

        logListButton = new QPushButton(centralwidget);
        logListButton->setObjectName("logListButton");
        sizePolicy.setHeightForWidth(logListButton->sizePolicy().hasHeightForWidth());
        logListButton->setSizePolicy(sizePolicy);
        logListButton->setFont(font);

        verticalLayout->addWidget(logListButton);

        configButton = new QPushButton(centralwidget);
        configButton->setObjectName("configButton");
        sizePolicy.setHeightForWidth(configButton->sizePolicy().hasHeightForWidth());
        configButton->setSizePolicy(sizePolicy);
        configButton->setFont(font);

        verticalLayout->addWidget(configButton);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        userWidget = new UserListWidget();
        userWidget->setObjectName("userWidget");
        stackedWidget->addWidget(userWidget);
        msgWidget = new MsgListWidget();
        msgWidget->setObjectName("msgWidget");
        stackedWidget->addWidget(msgWidget);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1015, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        userListButton->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        pubMsgListButton->setText(QCoreApplication::translate("MainWindow", "Public\n"
"messages", nullptr));
        pvtMsgListButton->setText(QCoreApplication::translate("MainWindow", "Private\n"
"messages", nullptr));
        logListButton->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
        configButton->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
