#pragma once
#include <vector>
#include "User.h"
#include "Message.h"
#include <string>
#include <unordered_map>

class Database
{
	vector<User> _users;
	vector<Message> _messages;
	unordered_map<string, int> _usersMapByName;

public:
    int searchUserByName(string);
  vector<string> getUserList() const;
  string getUserName(int userId) const;
  std::string getUserStat(string username);
	Database();
	int addUser(string username, string password);
	int checkPassword(string username, string password);
    void addChatMessage(string sender, string, string time);
    bool addPrivateMessage(string sender, string target, string message, string time);
	vector<string> getChatMessages();//показать все сообщения
  vector<Message> getPrivateMessage(int userID = -1);//показать личные сообщения пользователю username
    void loginUser(string username);
    void logoutUser(string username);
    void banUser(string username);
    void unblockUser(string username);
};
