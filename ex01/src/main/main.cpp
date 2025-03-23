#include "../../inc/main.hpp"

int	main(void)
{
	std::string command;

	while (1)
	{
		std::cout << "COMMAND: ";
		std::getline(std::cin, command);
		// check command if it is ADD, SEARCH, EXIT (case sensitive)
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			addContact();
		else if (command == "SEARCH")
			std::cout << "SEARCFESDFS" << std::endl;
	}
	// command is EXIT, need to free memory and exit properly.
	return (0);
}
