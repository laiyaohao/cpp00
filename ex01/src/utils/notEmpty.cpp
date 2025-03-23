#include "../../inc/main.hpp"

int notEmpty(std::string input)
{
  unsigned int i;

  i = 0;
  while (i < input.length())
  {
    if (isspace(input[i]))
    {
      std::cout << "space here" << std::endl;
      i++;
    }
    else
      break;
  }
  if (i == input.length())
  {
    return (0);
  }
  return (1);
}
