#include <iostream>
#include <cstring>
#include <cctype>
#include <ctype.h>
#include "./Contact.hpp"
#include "./Phonebook.hpp"

void	addContact(void);

// utils file functions
int onlyAlpha(std::string name);
int onlyNumber(std::string input);
void  storeName(std::string *name, std::string prompt);
void  storeNoSpace(std::string *name, std::string prompt);
void  storeNumber(std::string *number);
int notEmpty(std::string input);