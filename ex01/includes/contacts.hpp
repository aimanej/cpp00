#ifndef CONTACTS_HPP
#define CONTACTS_HPP

typedef enum book{
    f_name,
    l_name,
    nickname,
    number,
    ds,
}e_mem;

class contact
{
private:
    std::string str[5];
    e_mem indexer;

public:
    std::string getmem(e_mem mem);
    void setter();
};

#endif