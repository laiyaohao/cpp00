#include "../../inc/main.hpp"

void	addContact(PhoneBook *phonebook)
{
  Contact contact;

  contact.setFirstName();
  contact.setLastName();
  contact.setNickname();
  contact.setNumber();
  contact.setSecret();
  phonebook->addContact(contact);
}
