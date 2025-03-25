
class PhoneBook
{
	private:
		Contact contact[8];
		int count;
		void	printBorder()
		{
			std::cout << "-------------------------------------------" << std::endl;
		}
		int onlyNumber(std::string input)
    {
      unsigned int i;

      i = 0;
      while (i < input.length())
      {
        if (isspace(input[i]))
        {
          i++;
          continue;
        }
        if (!isdigit(input[i]))
          return (0);
        i++;
      }
      return (1);
    };
	
	public:
		PhoneBook()
		{
			count = 0;
		}

		void addContact(Contact newContact)
		{
			if (count >= 8)
				contact[count % 8] = newContact;
			else
				contact[count] = newContact;
			count++;
		}

		void  showAll()
		{
			int i;
			std::string ind;

			i = 0;
			printBorder();
			while (i < (count > 8 ? 8 : count))
			{
				std::cout << std::right << std::setw(10) << i;
				std::cout << "|";
				contact[i].printNames();
				std::cout << std::endl;
				i++;
			}
			printBorder();
			while (1)
			{
				std::cout << "Which index?" << std::endl;
				if (std::getline(std::cin, ind))
				{
					if (onlyNumber(ind) && (0 <= std::atoi(ind.c_str()) < 8))
					{
						contact[std::atoi(ind.c_str())].showAll();
						break;
					}
					else
						std::cout << "Please select a relevant index :)" << std::endl;
				}
				else
				{
					std::cout << std::endl;
					break;
				}
			}
			
		}
};
