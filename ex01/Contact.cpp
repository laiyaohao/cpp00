#include "./Contact.hpp"
#include <readline/readline.h>

int Contact::notEmpty(std::string input)
{
  unsigned int i;

  i = 0;
  while (i < input.length())
  {
    if (isspace(input[i]))
      i++;
    else
      break;
  }
  if (i == input.length())
    return (0);
  return (1);
};

int Contact::onlyAlpha(std::string name)
{
  unsigned int i;

  i = 0;
  while (i < name.length())
  {
    if (isspace(name[i]))
    {
      i++;
      continue;
    }
    if (!isalpha(name[i]))
      return (0);
    i++;
  }
  return (1);
};

int Contact::onlyNumber(std::string input)
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

Contact::Contact()
{
  _firstName = "";
  _lastName = "";
  _nickname = "";
  _phone = "";
  _darkestSecret = "";
}

std::string Contact::getFirstName()
{
  return (Contact::_firstName);
}

void  Contact::setFirstName()
{
  char  *input_c;
  
  while (1)
  {
    input_c = readline("First Name: ");
    if (input_c == NULL)
      continue;
    std::string input(input_c);
    if (notEmpty(input) && onlyAlpha(input))
    {
      Contact::_firstName = input;
      break;
    }
    else
      std::cout << "First name cannot be empty and must contain only alphabets :)" << std::endl;
  }
}

std::string Contact::getLastName()
{
  return (Contact::_lastName);
}

void  Contact::setLastName()
{
  char  *input_c;
  
  while (1)
  {
    input_c = readline("Last Name: ");
    if (input_c == NULL)
      continue;
    std::string input(input_c);
    if (notEmpty(input) && onlyAlpha(input))
    {
      Contact::_lastName = input;
      break;
    }
    else
      std::cout << "Last name cannot be empty and must contain only alphabets :)" << std::endl;
  }
}

std::string Contact::getNickname()
{
  return (Contact::_nickname);
}

void  Contact::setNickname()
{
  char  *input_c;
  
  while (1)
  {
    input_c = readline("Nickname: ");
    if (input_c == NULL)
      continue;
    std::string input(input_c);
    if (notEmpty(input))
    {
      Contact::_nickname = input;
      break;
    }
    else
      std::cout << "Maybe you can ask Nick for his nickname?" << std::endl;
  }
}

std::string Contact::getNumber()
{
  return (Contact::_phone);
}

void  Contact::setNumber()
{
  char  *input_c;
  
  while (1)
  {
    input_c = readline("Phone Number: ");
    if (input_c == NULL)
      continue;
    std::string input(input_c);
    if (notEmpty(input) && onlyNumber(input))
    {
      Contact::_phone = input;
      break;
    }
    else
      std::cout << "Number cannot be empty and must contain only numbers :)" << std::endl;
  }
}

std::string  Contact::getSecret()
{
  return (Contact::_darkestSecret);
}

void  Contact::setSecret()
{
  char  *input_c;
  
  while (1)
  {
    input_c = readline("Darkest Secret: ");
    if (input_c == NULL)
      continue;
    std::string input(input_c);
    if (notEmpty(input))
    {
      Contact::_darkestSecret = input;
      break;
    }
    else
      std::cout << "You should have some secret that you wanna share~~" << std::endl;
    
  }
}

void  Contact::showAll()
{
  std::cout << "Firstname: " << getFirstName() << std::endl;
  std::cout << "last: " << getLastName() << std::endl;
  std::cout << "nick: " << getNickname() << std::endl;
  std::cout << "num: " << getNumber() << std::endl;
  std::cout << "secret: " << getSecret() << std::endl;
}

void  Contact::printNames()
{
  if (getFirstName().length() > 10)
    std::cout << std::right << std::setw(9) << getFirstName().substr(0, 9) << ".";
  else
    std::cout << std::right << std::setw(10) << getFirstName();
  std::cout << "|";
  if (getLastName().length() > 10)
    std::cout << std::right << std::setw(9) << getLastName().substr(0, 9) << ".";
  else
    std::cout << std::right << std::setw(10) << getLastName();
  std::cout << "|";
  if (getNickname().length() > 10)
    std::cout << std::right << std::setw(9) << getNickname().substr(0, 9) << ".";
  else
    std::cout << std::right << std::setw(10) << getNickname();
  std::cout << "|";
}
