#include "../includes/phonebook.hpp"

int flusher()
{
    if (std::cin.eof())
        return 1;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return 0;
}

PhoneBook::PhoneBook()
{
    index = 0;
    total = 0;
}

int main()
{
    int t = 0;
    PhoneBook pb;

    Contact test;
    std::string action;
    while (1)
    {
        std::cin >> action;
        if (flusher())
            return;
        if (action == "ADD")
            pb.add();
        else if (action == "SEARCH")
            pb.search();
        else if (action == "EXIT")
            return 0;
    }
}