#include "Database.h"
#include "Parsing.h"
#include "sha1.h"
#include <memory>

//'Ανθρωπος

int Database::searchUserByName(string username)
{
	auto uit = _usersMapByName.find(username);
	if (uit != _usersMapByName.end()) return uit->second;
  return -1;
}

vector<string> Database::getUserList() const
{
  vector<string> userList;
  for(auto user : _usersMapByName)
  {
    userList.push_back(user.first);
  }
  return userList;
}

string Database::getUserName(int userId) const
{
  for (auto it = _usersMapByName.begin(); it != _usersMapByName.end(); ++it) {
    if (it->second == userId)
      return it->first;
  }
  return "";
}

Database::Database() : _users(), _messages()
{
}

int Database::addUser(string username, string password)
{
	if (!correctName(username)) return -1;
	auto uit = _usersMapByName.find(username);
	if (uit != _usersMapByName.end()) return -2;
	User newUser = User(username, sha1(password));
	_users.push_back(newUser);
  _usersMapByName.insert({ username, newUser.getUserID() });
	return newUser.getUserID();
}

int Database::checkPassword(string username, string password)
{
	int result = -1;
	Hash passHash = sha1(password);
	for (const auto &u : _users)
	{
		result = u.checklogin(username, passHash);
		if (result != -1) return result;
	}
	return result;
}

void Database::addChatMessage(string sender, string text, std::string time)
{
    _messages.push_back(Message(sender, text, time));
}

bool Database::addPrivateMessage(string sender, string target, string message, std::string time)
{
	int targetUser = searchUserByName(target);
	if (targetUser < 0)
	{
		return false;
	}
  _messages.push_back(Message(sender, targetUser, message, time));
	return true;
}

vector<string> Database::getChatMessages()
{
	vector<string> strings;
	for (auto &m: _messages)
	{
		if (m.getDest() == -1)
		{
            strings.push_back(m.getTime() + " <" + m.getSender() + ">: " + m.getText());
		}
	}
	return strings;
}

vector<Message> Database::getPrivateMessage(int userID)
{
	vector<Message> strings;
	//int userID = searchUserByName(username);
	for (auto &m : _messages)
  {
    if(userID == -1 && m.getDest() != -1)
      strings.push_back(m);
    else if(userID != -1 && m.getDest() == userID)
      strings.push_back(m);
	}
    return strings;
}

void Database::loginUser(string username)
{
    _users[searchUserByName(username)].changeStatus(1);
}

void Database::logoutUser(string username)
{
    if(_users[searchUserByName(username)].getuserStatus() != 2){
        _users[searchUserByName(username)].changeStatus(0);
    }
}

void Database::banUser(string username)
{
    _users[searchUserByName(username)].changeStatus(2);
}

void Database::unblockUser(string username)
{
    _users[searchUserByName(username)].changeStatus(0);
}

std::string Database::getUserStat(string username){
    int stat = _users[searchUserByName(username)].getuserStatus();
    if(stat == 0){ return "offline"; }
    else if(stat == 1){ return "online"; }
    else if(stat == 2){ return "banned"; }
}
