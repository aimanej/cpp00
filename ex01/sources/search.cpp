#include "../includes/phonebook.hpp"

void PhoneBook::display_all_contacts()
{
    int i = this->total;
    int t = 0;

    printer("     Index", 0);
    printer("First Name", 0);
    printer(" Last Name", 0);
    printer("  Nickname", 1);
    while (t < i)
    {
        Contact contact = this->contacts[t];
        printer(std::to_string(t), 0);
        printer(contact.getmem(f_name), 0);
        printer(contact.getmem(l_name), 0);
        printer(contact.getmem(nickname), 1);
        t++;
    }
}
void PhoneBook::display_one_contact(int index)
{
    std::cout << "First Name: " << contacts[index].getmem(f_name) << std::endl;
    std::cout << "Last Name: " << contacts[index].getmem(l_name) << std::endl;
    std::cout << "Nickname: " << contacts[index].getmem(nickname) << std::endl;
    std::cout << "Number:  " << contacts[index].getmem(number) << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getmem(ds) << std::endl;
}

void PhoneBook::search()
{
    if(total == 0)
        return;
    display_all_contacts();
    std::string input;
    std::cout << "Enter Index: ";
    std::cin >> input;
    if(flusher())
        return;
    int t = 0;
    if (input.size() != 1 || !std::isdigit(input.at(0)) || std::stoi(input) > total)
    {
        std::cout << "figure it out yourself then try again" << std::endl;
        return;
    }
    int index = std::stoi(input);
    display_one_contact(index);
}