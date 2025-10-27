#include "../includes/phonebook.hpp"

void contact::setter()
{
    std::cout << "first name: ";
    std::cin >> this->str[f_name];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "last name: ";
    std::cin >> this->str[l_name];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Nickname: ";
    std::cin >> this->str[nickname];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Phone number: ";
    std::cin >> this->str[number];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Darkest secret: ";
    std::cin >> this->str[ds];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
std::string contact::getmem(e_mem mem)
{
    return this->str[mem];
}