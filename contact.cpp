#include "contact.h"

Contact::Contact()
{
}

Contact::Contact(std::string firstName, std::string lastName, int age)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_age = age;
}

std::string Contact::getFirstName()
{
    return this->_firstName;
}

std::string Contact::getLastName()
{
    return this->_lastName;
}

std::string Contact::getFullName()
{
    return this->_firstName + " " + this->_lastName;
}

int Contact::getAge()
{
    return this->_age;
}
