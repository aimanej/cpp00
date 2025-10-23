#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class contact{
    public:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string number;
        std::string ds;
        
};

class phonebook{
    public:
        contact contacts[8];
        int index;
        int total;
        void add(phonebook *book);
        void search(phonebook *book);
        void printer(std::string string, int last);
};

#endif