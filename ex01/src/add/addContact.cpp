#include "../../inc/main.hpp"


void	addContact(PhoneBook *phonebook)
{
  Contact contact;

  contact.setFirstName();
  contact.setLastName();
  contact.setNickname();
  contact.setNumber();
  contact.setSecret();
  std::cout << "Firstname: " << contact.getFirstName() << std::endl;
  std::cout << "Lastname: " << contact.getLastName() << std::endl;
  // contact = Contact(firstName, lastName, nickname, phone, secret);
  phonebook->addContact(contact);
}
