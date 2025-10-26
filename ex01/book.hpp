#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

class contact
{
private:
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string number;
    std::string ds;

public:
    void filler(std::string name);
};

class phonebook
{
private:
    int index;
    int total;

public:
    contact contacts[8];
    void add(phonebook *book);
    void search(phonebook *book);
    void printer(std::string string, int last);
    phonebook();
};

#endif