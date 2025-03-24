
class PhoneBook
{
  private:
    Contact contact[8];
    int count;
  
  public:
    PhoneBook()
    {
      count = 0;
    }

    void addContact(Contact newContact)
    {
      if (count >= 8)
      {
        contact[count % 8] = newContact;
      }
      else
      {
        contact[count] = newContact;
      }
      count++;
    }

    void  showAll()
    {
      int i;

      i = 0;
      while (i < (count % 8))
      {
        contact[i].showAll();
        i++;
      }
    }
};
