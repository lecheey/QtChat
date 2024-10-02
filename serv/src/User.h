#pragma once
#include <string>
#include "sha1.h"
using namespace std;

class User
{
private:
    enum userStatus{offline, online, banned};

	static int userCounter;
	int _id;
	string _login;
	string _username;
	Hash _passwordHash;
    userStatus _status{userStatus::offline};
public:
	User();
    User(string username, Hash passHash);

	int checklogin(const string& login, const Hash& passHash) const;
	string& getuserName();
    int getUserID() const;
    int getuserStatus();
    void changeStatus(int _val);
};
