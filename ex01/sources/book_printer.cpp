#include "../includes/phonebook.hpp"

void printer(std::string string, int last)
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
        std::cout << string << std::endl;
}