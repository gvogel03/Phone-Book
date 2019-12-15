#ifndef PRINTCOMMAND_H_
#define PRINTCOMMAND_H_
#include "bookCommand.h"
class printCommand: public bookCommand
{
	private:
		phoneBook &book;
	public:
		void execute();
		printCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
};
#endif /*ADDUPDATECOMMAND_H_*/
