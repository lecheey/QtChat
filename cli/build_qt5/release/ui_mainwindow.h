/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_another_client;
    QAction *actionClose_this_client;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *messageLineEdit;
    QPushButton *sendMessageButton;
    QPushButton *privateMessageSendButton;
    QSplitter *splitter;
    QTextBrowser *commonChatBrowser;
    QTextBrowser *privateChatBrowser;
    QMenuBar *menubar;
    QMenu *menuMain_menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 569);
        actionOpen_another_client = new QAction(MainWindow);
        actionOpen_another_client->setObjectName(QString::fromUtf8("actionOpen_another_client"));
        actionClose_this_client = new QAction(MainWindow);
        actionClose_this_client->setObjectName(QString::fromUtf8("actionClose_this_client"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        messageLineEdit = new QLineEdit(centralwidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));

        horizontalLayout->addWidget(messageLineEdit);

        sendMessageButton = new QPushButton(centralwidget);
        sendMessageButton->setObjectName(QString::fromUtf8("sendMessageButton"));

        horizontalLayout->addWidget(sendMessageButton);

        privateMessageSendButton = new QPushButton(centralwidget);
        privateMessageSendButton->setObjectName(QString::fromUtf8("privateMessageSendButton"));

        horizontalLayout->addWidget(privateMessageSendButton);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        commonChatBrowser = new QTextBrowser(splitter);
        commonChatBrowser->setObjectName(QString::fromUtf8("commonChatBrowser"));
        splitter->addWidget(commonChatBrowser);
        privateChatBrowser = new QTextBrowser(splitter);
        privateChatBrowser->setObjectName(QString::fromUtf8("privateChatBrowser"));
        splitter->addWidget(privateChatBrowser);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 607, 19));
        menuMain_menu = new QMenu(menubar);
        menuMain_menu->setObjectName(QString::fromUtf8("menuMain_menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain_menu->menuAction());
        menuMain_menu->addAction(actionOpen_another_client);
        menuMain_menu->addSeparator();
        menuMain_menu->addAction(actionClose_this_client);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_another_client->setText(QCoreApplication::translate("MainWindow", "Open another client", nullptr));
        actionClose_this_client->setText(QCoreApplication::translate("MainWindow", "Close this client", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Your message:", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("MainWindow", "Send to all", nullptr));
        privateMessageSendButton->setText(QCoreApplication::translate("MainWindow", "Send private", nullptr));
        menuMain_menu->setTitle(QCoreApplication::translate("MainWindow", "Main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
