#include "../../inc/main.hpp"

void  storeName(std::string *name, std::string prompt)
{
  std::string input;
  
  while (1)
  {
    std::cout << prompt;
    std::getline(std::cin, input);
    if (notEmpty(input) && onlyAlpha(input))
      break;
  }
  std::cout << "input: " << input << std::endl;
  *name = input;
}

void  storeNoSpace(std::string *name, std::string prompt)
{
  std::string input;
  
  while (1)
  {
    std::cout << prompt;
    std::getline(std::cin, input);
    if (notEmpty(input))
      break;
  }
  std::cout << "nick: " << input << std::endl;
  *name = input;
}

void  storeNumber(std::string *num)
{
  std::string input;
  
  while (1)
  {
    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    if (notEmpty(input) && onlyNumber(input))
      break;
  }
  std::cout << "input: " << input << std::endl;
  *num = input;
}