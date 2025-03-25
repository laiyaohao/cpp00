
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
  count = 0;
}

void  PhoneBook::printBorder(void)
{
  std::cout << "--------------------------------------------" << std::endl;
}

void  PhoneBook::printHeader(void)
{
  std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
}

void  PhoneBook::printTable(void)
{
  int i;

  i = 0;
  printBorder();
  printHeader();
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
}

int PhoneBook::onlyNumber(std::string input)
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

void  PhoneBook::addContact()
{
  Contact newContact;

  newContact.setFirstName();
  newContact.setLastName();
  newContact.setNickname();
  newContact.setNumber();
  newContact.setSecret();
  if (count >= 8)
    contact[count % 8] = newContact;
  else
    contact[count] = newContact;
  count++;
}

void  PhoneBook::showAll()
{
  std::string ind;

  printTable();
  while (1)
  {
    if (count == 0)
    {
      std::cout << "Phonebook is empty :(" << std::endl;
      break;
    }
    std::cout << "Which index?" << std::endl;
    if (std::getline(std::cin, ind))
    {
      if (onlyNumber(ind) &&
        0 <= std::atoi(ind.c_str()) &&
        std::atoi(ind.c_str()) < 8 &&
        std::atoi(ind.c_str()) <= ((count - 1) > 8 ? 8 : (count - 1)))
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
