#include "../../inc/main.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phonebook;

	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	while (1)
	{
		std::cout << "COMMAND: ";
		if (std::getline(std::cin, command))
		{
			if (command == "EXIT")
				break;
			else if (command == "ADD")
				addContact(&phonebook);
			else if (command == "SEARCH")
				phonebook.showAll();
			else
				std::cout << "APPLICABLE COMMANDS: ADD, SEARCH, EXIT" << std::endl;
		}
		else
		{
			std::cout << std::endl;
			break;
		}
	}
	return (0);
}
