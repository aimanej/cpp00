#include "../includes/phonebook.hpp"


// void contact::setter()
// {
//     std::cout << "first name: ";
//     std::cin >> this->str[f_name];
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "last name: ";
//     std::cin >> this->str[l_name];
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "Nickname: ";
//     std::cin >> this->str[nickname];
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "Phone number: ";
//     std::cin >> this->str[number];
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "Darkest secret: ";
//     std::cin >> this->str[ds];
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// }
// std::string contact::getmem(e_mem mem)
// {
//     return this->str[mem];
// }

void phonebook::add(phonebook *book)
{
    int index = this->index;
    int total = this->total;

    contact &contact = this->contacts[index];
    contact.setter();
    if (index == 7)
        book->index = 0;
    else
        book->index++;
    if(total != 7)
        this->total++;
}

void phonebook::printer(std::string string, int last)
{
    if (string.size() > 10)
    {
        string.resize(9);
        string.append(".");
    }
    else if (string.size() < 10)
        string.insert(0, 10 - string.size(), ' ');
    if (!last)
        std::cout << string << "|";
    else
        std::cout << string << "\n";
}

void phonebook::search(phonebook *book)
{
    int i = book->total;
    int t = 0;

    phonebook::printer("     Index", 0);
    phonebook::printer("First Name", 0);
    phonebook::printer(" Last Name", 0);
    phonebook::printer("  Nickname", 1);
    while (t < i)
    {
        contact contact = book->contacts[t];
        phonebook::printer(std::to_string(t), 0);
        phonebook::printer(contact.getmem(f_name), 0);
        phonebook::printer(contact.getmem(l_name), 0);
        phonebook::printer(contact.getmem(nickname), 1);
        t++;
    }
    std::string input;
    std::cout << "Enter Index: ";
    std::cin >> input;
    t = 0;
    while (t < input.size())
    {
        if (!std::isdigit(input[t]))
        {
            std::cout << "Non Numerical Value Detected\n";
            return;
        }
        t++;
    }
    int index = std::stoi(input);
    if (index > book->total)
    {
        std::cout << "Out Of Bounds\n";
        return;
    }
    if (index >= 0 && index < book->total)
    {
        std::cout << "First Name: " << book->contacts[index].getmem(f_name) << "\n";
        std::cout << "Last Name: " << book->contacts[index].getmem(l_name) << "\n";
        std::cout << "Nickname: " << book->contacts[index].getmem(nickname) << "\n";
        std::cout << "Number:  " << book->contacts[index].getmem(number) << "\n";
        std::cout << "Darkest Secret: " << book->contacts[index].getmem(ds) << "\n";
    }
    else
        std::cout << "index provided is out of range... search again\n";
}
phonebook::phonebook()
{
    this->index = 0;
    this->total = 0;
}

int main()
{
    int t = 0;
    phonebook pb;

    contact test;
    std::string action;
    while (1)
    {
        std::cin >> action;
        if (action == "ADD")
            pb.add(&pb);
        else if (action == "SEARCH")
            pb.search(&pb);
        else if (action == "EXIT")
            return 0;
    }
}