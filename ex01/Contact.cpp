#include "./Contact.hpp"

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
  std::string input;
  
  while (1)
  {
    std::cout << "First Name: ";
    if (std::getline(std::cin, input))
    {
      if (notEmpty(input) && onlyAlpha(input))
        break;
      else
        std::cout << "First name cannot be empty and must contain only alphabets :)" << std::endl;
    }
    else
    {
      std::cout << std::endl;
      break;
    }
  }
  Contact::_firstName = input;
}

std::string Contact::getLastName()
{
  return (Contact::_lastName);
}

void  Contact::setLastName()
{
  std::string input;
  
  while (1)
  {
    std::cout << "Last Name: ";
    if (std::getline(std::cin, input))
    {
      if (notEmpty(input) && onlyAlpha(input))
        break;
      else
        std::cout << "Last name cannot be empty and must contain only alphabets :)" << std::endl;
    }
    else
    {
      std::cout << std::endl;
      break;
    }
  }
  Contact::_lastName = input;
}

std::string Contact::getNickname()
{
  return (Contact::_nickname);
}

void  Contact::setNickname()
{
  std::string input;
  
  while (1)
  {
    std::cout << "Nickname: ";
    if (std::getline(std::cin, input))
    {
      if (notEmpty(input))
        break;
      else
        std::cout << "Maybe you can ask Nick for his nickname?" << std::endl;
    }
    else
    {
      std::cout << std::endl;
      break;
    }
  }
  Contact::_nickname = input;
}

std::string Contact::getNumber()
{
  return (Contact::_phone);
}

void  Contact::setNumber()
{
  std::string input;
  
  while (1)
  {
    std::cout << "Phone Number: ";
    if (std::getline(std::cin, input))
    {
      if (notEmpty(input) && onlyNumber(input))
        break;
      else
        std::cout << "Number cannot be empty and must contain only numbers :)" << std::endl;
    }
    else
    {
      std::cout << std::endl;
      break;
    }
  }
  Contact::_phone = input;
}

std::string  Contact::getSecret()
{
  return (Contact::_darkestSecret);
}

void  Contact::setSecret()
{
  std::string input;
  
  while (1)
  {
    std::cout << "Darkest Secret: ";
    if (std::getline(std::cin, input))
    {
      if (notEmpty(input))
        break;
      else
        std::cout << "You should have some secret that you wanna share~~" << std::endl;
    }
    else
    {
      std::cout << std::endl;
      break;
    }
  }
  Contact::_darkestSecret = input;
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
