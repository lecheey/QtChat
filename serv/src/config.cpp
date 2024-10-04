#include "config.h"

QFile filename("./config.ini");

myConfig::myConfig() : PORT(0), admin(""), sqluser(""), sqlpass(""), sqldb(""){
    readConfig();
}

void myConfig::readConfig()
{
    if(filename.open(QIODevice::ReadOnly)){
        QTextStream in(&filename);
        while(!in.atEnd()){
            QString str = in.readLine();
            QStringList list = str.split('\t');
            if(list[0] == "PORT"){ PORT = list[1].toInt(); }
            else if(list[0] == "admin"){ admin = list[1]; }
            else if(list[0] == "sqluser"){ sqluser = list[1]; }
            else if(list[0] == "sqlpass"){ sqlpass = list[1]; }
            else if(list[0] == "sqldb"){ sqldb = list[1]; }
            filename.close();
        }
    }
    else{
        PORT = 7777;
        admin = "admin";
        sqluser = "lightchat";
        sqlpass = "lightchat";
        sqldb = "lightchatdb";
        writeConfig();
    }
}

void myConfig::writeConfig()
{
    if(filename.open(QIODevice::WriteOnly)){
        QTextStream out(&filename);
        out << "PORT" << "\t" << PORT << "\n";
        out << "admin" << "\t" << admin << "\n";
        out << "sqluser" << "\t" << sqluser << "\n";
        out << "sqlpass" << "\t" << sqlpass << "\n";
        out << "sqldb" << "\t" << sqldb << "\n";
        filename.close();
    }
    else{
        return;
    }
}

QString myConfig::getAdmin()
{
    return admin;
}
