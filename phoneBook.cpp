#include <string>
#include <iostream>
#include <vector>
#include "phoneBook.h"

phoneBook::phoneBook(): phoneVector(0)
{
}
bool phoneBook::find(std::string name){
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			return true;
		}
	}
	return false;
}
void phoneBook::insert(const phoneBookEntry &entry){
	bool a = true;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == entry.name()){
			phoneVector[i].email(entry.email());
			phoneVector[i].phoneNumber(entry.phoneNumber());
			a = false;
		}
	}
	if(a){
		phoneVector.push_back(entry);
	}
}
void phoneBook::insert(const std::string &name, const std::string &number, const std::string &email)
{
	bool a = true;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			phoneVector[i].email(email);
			phoneVector[i].phoneNumber(number);
			a = false;
		}
	}
	if(a){
		phoneVector.push_back(phoneBookEntry(name, number, email));
	}
}
void phoneBook::insert(const std::string &name, const std::string &number)
{
	bool a = true;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			phoneVector[i].phoneNumber(number);
			a = false;
		}
	}
	if(a){
		phoneVector.push_back(phoneBookEntry(name, number));
	}
}
bool phoneBook::erase(std::string name){
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		if(phoneVector[i].name() == name){
			phoneVector.erase(phoneVector.begin() + i);
			return true;
		}
	}
	return false;
}
void phoneBook::print() const{
	std::cout << "Name:                          Phone Number:   E-Mail:" << std::endl;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		std::cout << phoneVector[i].name();
		for(std::size_t h = 31; h > phoneVector[i].name().size(); h--){
			std::cout <<" ";
		}
		std::cout << phoneVector[i].phoneNumber();
		for(std::size_t j = 16; j > phoneVector[i].phoneNumber().size(); j--){
			std::cout <<" ";
		}
		std::cout << phoneVector[i].email() << std::endl;
	}
}
void phoneBook::print(std::ostream &out) const{
	out << "Name:                          Phone Number:   E-Mail:" << std::endl;
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		out << phoneVector[i].name();
		for(std::size_t h = 31; h > phoneVector[i].name().size(); h--){
			out <<" ";
		}
		out << phoneVector[i].phoneNumber();
		for(std::size_t j = 16; j > phoneVector[i].phoneNumber().size(); j--){
			out <<" ";
		}
		out << phoneVector[i].email() << std::endl;
	}
}

void phoneBook::debug(std::ostream &out) const{
	for(std::size_t i = 0; i < phoneVector.size(); i++){
		out << phoneVector[i].name() << " " << phoneVector[i].phoneNumber() << " " << phoneVector[i].email() << std::endl;
	}
}
std::size_t phoneBook::size() const{
	return phoneVector.size();
}
phoneBook::iterator phoneBook::begin()
{
	return phoneVector.begin();
}
phoneBook::iterator phoneBook::end()
{
	return phoneVector.end();
}




