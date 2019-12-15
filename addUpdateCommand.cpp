#include "addUpdateCommand.h"
addUpdateCommand::addUpdateCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream)
  :  bookCommand(inStream, outStream), book(bookIn)
{
}
void addUpdateCommand::execute()
{
	std::string name, number, email;
	name = input("Enter name to add/update");
	number = input("Enter phone number");
	email = input("Enter e-mail address");
	if(book.find(name)){
		bookCommand::disp("Updating phone book entry for " + name);
	}
	else{
		bookCommand::disp("Adding phone book entry for " + name);
	}
	book.insert(name, number, email);
}
