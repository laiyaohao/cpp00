#include <cstring>

class Contact
{
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;
    int notEmpty(std::string input)
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
      return (1);
    };
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
      return (1);
    };

  public:
    Contact()
    {
      _firstName = "";
      _lastName = "";
      _nickname = "";
      _phone = "";
      _darkestSecret = "";
    }

    std::string  getFirstName()
    {
      return (_firstName);
    }

    void  setFirstName()
    {
      std::string input;
      
      while (1)
      {
        std::cout << "First Name: ";
        std::getline(std::cin, input);
        if (notEmpty(input) && onlyAlpha(input))
          break;
        else
          std::cout << "First name cannot be empty and must contain only alphabets :)" << std::endl;
      }
      _firstName = input;
    }

    std::string  getLastName()
    {
      return (_lastName);
    }

    void  setLastName()
    {
      std::string input;
      
      while (1)
      {
        std::cout << "Last Name: ";
        std::getline(std::cin, input);
        if (notEmpty(input) && onlyAlpha(input))
          break;
        else
          std::cout << "Last name cannot be empty and must contain only alphabets :)" << std::endl;
      }
      _lastName = input;
    }

    std::string  getNickname()
    {
      return (_nickname);
    }

    void  setNickname()
    {
      std::string input;
      
      while (1)
      {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        if (notEmpty(input))
          break;
        else
          std::cout << "Maybe you can ask Nick for his nickname?" << std::endl;
      }
      _nickname = input;
    }

    std::string  getNumber()
    {
      return (_phone);
    }

    void  setNumber()
    {
      std::string input;
      
      while (1)
      {
        std::cout << "Phone Number: ";
        std::getline(std::cin, input);
        if (notEmpty(input) && onlyNumber(input))
          break;
        else
          std::cout << "Number cannot be empty and must contain only numbers :)" << std::endl;
      }
      _phone = input;
    }

    std::string  getSecret()
    {
      return (_darkestSecret);
    }

    void  setSecret()
    {
      std::string input;
      
      while (1)
      {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, input);
        if (notEmpty(input))
          break;
        else
          std::cout << "You should have some secret that you wanna share~~" << std::endl;
      }
      _darkestSecret = input;
    }

    void  showAll()
    {
      std::cout << "Firstname: " << getFirstName() << std::endl;
      std::cout << "last: " << getLastName() << std::endl;
      std::cout << "nick: " << getNickname() << std::endl;
      std::cout << "num: " << getNumber() << std::endl;
      std::cout << "secret: " << getSecret() << std::endl;
    }
};