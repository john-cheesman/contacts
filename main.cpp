#include <iostream>
#include "contact.h"

using namespace std;

int main()
{
    cout << "Helloooo!" << endl;

    string firstName("John");
    string lastName("Cheesman");

    Contact john(firstName, lastName, 28);

    cout << john.getFullName() << endl;

    return 0;
}
