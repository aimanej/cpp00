#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include "contacts.hpp"

class PhoneBook
{
private:
    int index;
    int total;
    Contact contacts[8];
    void display_all_contacts();
    void display_one_contact(int index);
public:
    void add();
    void search();
    PhoneBook();
};

void printer(std::string string, int last);
int flusher();

#endif