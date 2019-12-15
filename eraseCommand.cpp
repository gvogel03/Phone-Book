#include "eraseCommand.h"
eraseCommand::eraseCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream)
  :  bookCommand(inStream, outStream), book(bookIn)
{
}
void eraseCommand::execute(){

	std::string name;
	name= input("Enter name to erase");
	if(book.find(name)){
		book.erase(name);
		disp("Phone book entry " + name + " was erased");
	}
	else{
		disp("Phone book entry " + name + " was not erased");
	}
}

