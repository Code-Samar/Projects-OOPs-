#include "User.h"
#include <iostream>
using namespace std;

User::User(int id, string name, string mail, string pass, string addr)
    : userId(id), username(name), email(mail), password(pass), address(addr) {}

void User::login() {
    cout << "Logging in as " << username << "\n";
}

void User::viewProfile() {
    cout << "User ID: " << userId << "\n";
    cout << "Username: " << username << "\n";
    cout << "Email: " << email << "\n";
    cout << "Address: " << address << "\n";
}

