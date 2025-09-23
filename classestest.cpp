#include <string>
#include <iostream>
#include "phonebook.hpp"

void phonebook::add(phonebook *book)
{
    int index = book->index;
    int total = book->total;

    contact &contact = book->contacts[index];
    std::cout << "first name: ";
    std::cin >> contact.f_name;
    std::cin.clear();
    std::cout << "last name: ";
    std::cin >> contact.l_name;
    std::cout << "Nickname: ";
    std::cin >> contact.nickname;
    std::cout << "Phone number: ";
    std::cin >> contact.number;
    std::cout << "Darkest secret: ";
    std::cin >> contact.ds;
    if (index == 7)
        book->index = 0;
    else
        book->index++;
    if(book->total < 7)
        book->total++;
}

void phonebook::printer(std::string string, int last)
{
    if (string.size() > 10)
    {
        string.resize(9);
        string.append(".");
    }
    else if (string.size() < 10)
    {
        while (string.size() != 10)
        {
            string += " ";
        }
    }
    if (!last)
        std::cout << string << "|";
    else
        std::cout << string << "\n";
}

void phonebook::search(phonebook *book)
{
    int i = book->total;
    int t = 0;
    if (i > 7)
        i = 7;
    while (t < i)
    {
        contact contact = book->contacts[t];
        phonebook::printer(contact.f_name, 0);
        phonebook::printer(contact.l_name, 0);
        phonebook::printer(contact.nickname, 0);
        phonebook::printer(contact.number, 0);
        phonebook::printer(contact.ds, 1);
        t++;
    }
    std::string input;
    std::cin >> input;
    t = 0;
    while(t < input.size())
    {
      if(!std::isdigit(input[t]))
        {
            std::cout << "wrong input\n";
            return ;
        }
        t++;
    }
    int index = std::stoi(input);
    if (index >= 0 && index < book->total)
    {
        std::cout << "First Name: " << book->contacts[index].f_name << "\n";
        std::cout << "Last Name: " << book->contacts[index].l_name << "\n";
        std::cout << "Nickname: " << book->contacts[index].nickname << "\n";
        std::cout << "Number:  " << book->contacts[index].number << "\n";
        std::cout << "Darkest Secret: " << book->contacts[index].ds << "\n";
    }
    else
        std::cout << "index provided is out of range... search again\n";
}

int main()
{
    int t = 0;
    phonebook pb;
    pb.index = 0;
    pb.total = 0;
    contact test;
    std::string action;
    while (1)
    {
        std::cin >> action;
        if (action == "add")
        {
            pb.add(&pb);
            // printf("compared\n");
        }
        else if (action == "search")
        {
            // std::cout << pb.contacts[0].f_name;
            pb.search(&pb);
        }
        else if (action == "exit")
            return 0;
    }

}