#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <limits>
#include "contacts.hpp"

class phonebook
{
private:
    int index;
    int total;
    contact contacts[8];

public:
    void add(phonebook *book);
    void search(phonebook *book);
    void printer(std::string string, int last);
    phonebook();
};

#endif