#include <string>
#include <iostream>
#include "phoneBookEntry.h"
phoneBookEntry::phoneBookEntry(): username(""), usernumber(""), useremail("")
{
}
phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number): username(name), usernumber(number), useremail("")
{
}
phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number, const std::string &email): username(name), usernumber(number), useremail(email)
{
}
phoneBookEntry::phoneBookEntry(const phoneBookEntry &from)
	{
		username = from.username;
		usernumber = from.usernumber;
		useremail = from.useremail;
	}
std::string phoneBookEntry::name() const{
	return username;
}
std::string phoneBookEntry::phoneNumber() const{
	return usernumber;
}
std::string phoneBookEntry::email() const{
	return useremail;
}
void phoneBookEntry::phoneNumber(const std::string &newNumber){
	usernumber = newNumber;
}
void phoneBookEntry::email(const std::string &newEmail){
	useremail = newEmail;
}


