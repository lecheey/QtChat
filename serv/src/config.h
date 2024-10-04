#pragma once
#ifndef CONFIG_H
#define CONFIG_H

#endif // CONFIG_H

#include <QFile>
#include <QString>
#include <QStringList>
#include <QTextStream>

class myConfig{

    int PORT;
    QString admin;
    QString sqluser;
    QString sqlpass;
    QString sqldb;

public:
    myConfig();

    void readConfig(); // get user config or use default
    void writeConfig(); // save user config
    QString getAdmin();
};
