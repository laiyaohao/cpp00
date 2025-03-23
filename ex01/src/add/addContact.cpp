#include "../../inc/main.hpp"


void	addContact(void)
{
	std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phone;
  std::string secret;

  storeName(&firstName, "First Name: ");
  storeName(&lastName, "Last Name: ");
  storeNoSpace(&nickname, "Nickname: ");
  storeNumber(&phone);
  storeNoSpace(&secret, "Darkest Secret: ");
  std::cout << "first: " << firstName << std::endl; 
  std::cout << "last: " << lastName << std::endl;
  std::cout << "nick: " << nickname << std::endl;
  std::cout << "phone: " << phone << std::endl;
  std::cout << "secret: " << secret << std::endl;
}
