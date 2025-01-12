#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    int userId;
    string username;
    string email;
    string password;
    string address;

public:
    User(int id, string name, string mail, string pass, string addr);
    void login();
    void viewProfile();
};

#endif
