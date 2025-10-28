#include "../includes/phonebook.hpp"

void Contact::set_contact_info()
{
    std::cout << "first name: ";
    std::cin >> this->str[f_name];
    if(flusher())
        return;
    std::cout << "last name: ";
    std::cin >> this->str[l_name];
   if(flusher())
        return;
    std::cout << "Nickname: ";
    std::cin >> this->str[nickname];
    if(flusher())
        return;
    std::cout << "Phone number: ";
    std::cin >> this->str[number];
    if(flusher())
        return;
    std::cout << "Darkest secret: ";
    std::cin >> this->str[ds];
    if(flusher())
        return;
}
std::string Contact::getmem(e_mem mem)
{
    return this->str[mem];
}