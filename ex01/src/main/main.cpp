#include "../../inc/main.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "COMMAND: ";
		std::getline(std::cin, command);
		// check command if it is ADD, SEARCH, EXIT (case sensitive)
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			addContact(&phonebook);
		else if (command == "SEARCH")
			phonebook.showAll();
		else
			std::cout << "APPLICABLE COMMANDS: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
