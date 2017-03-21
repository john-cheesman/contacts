#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
  private:
    std::string _firstName;
    std::string _lastName;
    int _age;

  public:
    Contact();
    Contact(std::string, std::string, int);
    std::string getFirstName();
    std::string getLastName();
    std::string getFullName();
    int getAge();
};

#endif
