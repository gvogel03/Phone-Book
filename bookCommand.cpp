#include <string>
#include <iostream>
#include "bookCommand.h"
bookCommand::bookCommand(std::istream &instream, std::ostream &outstream) : in(instream), out(outstream)
{
}
void bookCommand::disp(std::string text)
{
	out << text << std::endl;
}
std::string bookCommand::input(std::string text)
{
	out << text << std::endl;
	getline(in, retText);
	return retText;

}
