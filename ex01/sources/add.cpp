#include "../includes/phonebook.hpp"

void PhoneBook::add()
{
    Contact &contact = this->contacts[index];
    contact.set_contact_info();
    if (index == 7)
        index = 0;
    else
        index++;
    if (total != 7)
        total++;
}