#include <vector>
#include <iostream>
#include <string>
#include "Account.hpp"

int main()
{
    std::vector<std::string> vec = {"here", "did", "too", "much"};
    std::vector<std::string>::iterator str;
    for (auto str : vec)
    {
        std::cout << str << "\n";
        // std::cout << t.front();
    }
    // std::cout << vec.at(2) << "\n";
    // std::vector<Account::> acc;
    // acc.
}