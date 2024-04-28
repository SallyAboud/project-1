#include "PasswordManager.h"
#include<iostream>
#include <string>
using namespace std;

string PasswordManager:: getPassword() {
	return password;
}
void PasswordManager:: setPassword(string newPassword) {
	newPassword = password;
}