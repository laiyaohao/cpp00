#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

# include <cstdlib>
# include "./Contact.hpp"
class PhoneBook
{
	private:
		Contact contact[8];
		int count;
		void	printBorder(void);
		void	printHeader(void);
		void	printTable(void);
		int onlyNumber(std::string input);
	
	public:
		PhoneBook();
		void	addContact();
		void  showAll();
		
};

#endif