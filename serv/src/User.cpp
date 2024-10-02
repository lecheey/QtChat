#include "User.h"
int User::userCounter = 1;

User::User() : _id(0), _login(""), _username(""), _passwordHash()
{
}

User::User(string username, Hash passHash) :_login(username), _username(username), _passwordHash(passHash), _id(++userCounter)
{
}

int User::checklogin(const string& login, const Hash& passHash) const
{
	if ((_login == login) && (_passwordHash == passHash)) return _id;
	return -1;
}

string& User::getuserName() 
{
    return _username;
}

int User::getUserID() const
{
    return _id;
}

int User::getuserStatus()
{
    return _status;
}

void User::changeStatus(int _val)
{
    if(_val == 0){
        this->_status = userStatus::offline;
    }
    else if(_val == 1){
        this->_status = userStatus::online;
        }
    else if(_val == 2){
        this->_status = userStatus::banned;
    }
}
