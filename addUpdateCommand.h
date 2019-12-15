#ifndef ADDUPDATECOMMAND_H_
#define ADDUPDATECOMMAND_H_
#include "bookCommand.h"
class addUpdateCommand: public bookCommand
{
	private:
		phoneBook &book;
	public:
		void execute();
		addUpdateCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
};
#endif /*ADDUPDATECOMMAND_H_*/
