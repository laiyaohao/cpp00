#include <iostream>
#include <cstring>

class Contact
{
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;

  public:
    Contact(std::string firstName,
            std::string lastName,
            std::string nickname,
            std::string phone,
            std::string darkestSecret)
    {
      addFirstName(firstName);
      _lastName = lastName;
      _nickname = nickname;
      _phone
    }
    /*
    Destructor:
    Cleans up resources when an object goes out of scope
    */
    ~Contact()
    {
      delete _firstName;
    }
    /*
    addFirstName function
    */
    void addFirstName(std::string firstName)
    {
      _firstName = firstName;
    }
    
};

class PhoneBook
{
  public:
    Contact contacts[8];
};
