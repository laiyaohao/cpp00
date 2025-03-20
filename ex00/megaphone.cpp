#include <iostream>

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (is_lower(argv[i][j]))
					std::cout << (char)(argv[i][j] - 32);
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}
