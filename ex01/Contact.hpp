#ifndef __CONTACT_H__
#define __CONTACT_H__

# include <cstring>
# include <iomanip>
# include <iostream>

class Contact
{
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;
    int notEmpty(std::string input);
    int onlyAlpha(std::string name);
    int onlyNumber(std::string input);

  public:
    Contact();
    std::string  getFirstName();
    void  setFirstName();
    std::string  getLastName();
    void  setLastName();
    std::string  getNickname();
    void  setNickname();
    std::string  getNumber();
    void  setNumber();
    std::string  getSecret();
    void  setSecret();
    void  showAll();
    void  printNames();
};

#endif