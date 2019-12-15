#ifndef BOOKCOMMAND_H_
#define BOOKCOMMAND_H_
#include <iostream>
#include <string>
#include <vector>
#include "command.h"
#include "phoneBook.h"
class bookCommand : public command{
	protected:
		std::string input(std::string text);
		void disp(std::string text);
		std::istream &in;
		std::ostream &out;
		std::string retText;
	public:
		bookCommand(std::istream &in, std::ostream &out);

};
#endif /*BOOKCOMMAND_H*/
