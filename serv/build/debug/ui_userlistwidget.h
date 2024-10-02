/********************************************************************************
** Form generated from reading UI file 'userlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLISTWIDGET_H
#define UI_USERLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserListWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *userListW;
    QVBoxLayout *verticalLayout;
    QPushButton *getUserInfo;
    QPushButton *disconnectUser;
    QPushButton *banUser;
    QPushButton *unblockUser;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UserListWidget)
    {
        if (UserListWidget->objectName().isEmpty())
            UserListWidget->setObjectName("UserListWidget");
        UserListWidget->resize(857, 577);
        horizontalLayout = new QHBoxLayout(UserListWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        userListW = new QListWidget(UserListWidget);
        userListW->setObjectName("userListW");

        horizontalLayout->addWidget(userListW);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        getUserInfo = new QPushButton(UserListWidget);
        getUserInfo->setObjectName("getUserInfo");

        verticalLayout->addWidget(getUserInfo);

        disconnectUser = new QPushButton(UserListWidget);
        disconnectUser->setObjectName("disconnectUser");

        verticalLayout->addWidget(disconnectUser);

        banUser = new QPushButton(UserListWidget);
        banUser->setObjectName("banUser");

        verticalLayout->addWidget(banUser);

        unblockUser = new QPushButton(UserListWidget);
        unblockUser->setObjectName("unblockUser");

        verticalLayout->addWidget(unblockUser);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(UserListWidget);

        QMetaObject::connectSlotsByName(UserListWidget);
    } // setupUi

    void retranslateUi(QWidget *UserListWidget)
    {
        UserListWidget->setWindowTitle(QCoreApplication::translate("UserListWidget", "Form", nullptr));
        getUserInfo->setText(QCoreApplication::translate("UserListWidget", "Get info", nullptr));
        disconnectUser->setText(QCoreApplication::translate("UserListWidget", "Disconnect", nullptr));
        banUser->setText(QCoreApplication::translate("UserListWidget", "Block", nullptr));
        unblockUser->setText(QCoreApplication::translate("UserListWidget", "Unblock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserListWidget: public Ui_UserListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLISTWIDGET_H
