/*
 * project2.cpp
 *
 * The main function calls two other functions. testPhoneBook and testList
 *
 * The testList function tests the DoubleLinkedList class.
 *
 * The testPhoneBook function tests the PhoneBook class which also uses
 * the PhoneBookEntry class and the OrderedDoubleLinkedList class.
 *
 */

#include <iostream>
#include <string>
#include "phoneBookEntry.h"
#include "menuList.h"
#include "phoneBook.h"
#include "addUpdateCommand.h"
#include "bookCommand.h"
#include "printCommand.h"
#include "eraseCommand.h"

int main()
{
	// create the int variable. This will be updated by the commands below
	phoneBook pbook;
	// create the commands
	addUpdateCommand addUpdate(pbook, std::cin, std::cout);
	printCommand printComm(pbook, std::cin, std::cout);
	eraseCommand eraseComm(pbook, std::cin, std::cout);

	// build the menuList and menuItems
	menuList menu("Phone book menu:");
	// these are the actual menu entries for the application
	menuItem addItem('a', "add/update", addUpdate);
	menuItem eraseItem('e', "erase", eraseComm);
	menuItem printItem('p', "print", printComm);

	// note that the quit command is added to the menu automatically

	// add the menuItem values to the menulist
	menu.add(addItem);
	menu.add(eraseItem);
	menu.add(printItem);


	std::cout << "Starting the Phone Book\n" << std::endl;


	// run the menu
	menu.start();
	return 0;
}

