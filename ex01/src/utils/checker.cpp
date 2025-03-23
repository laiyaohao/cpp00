#include "../../inc/main.hpp"

int onlyAlpha(std::string name)
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
  std::cout << "finished onlyAlpha" << std::endl;
  return (1);
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
  std::cout << "finished onlyNumber" << std::endl;
  return (1);
}
