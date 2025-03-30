#include "./main.hpp"
#include <readline/readline.h>

int	main(void)
{
	char *com_c;
	PhoneBook phonebook;

	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
	while (1)
	{
		com_c = readline("COMMAND: ");
		if (com_c == NULL)
			continue;
		std::string command(com_c);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.showAll();
	}
	return (0);
}
