#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    for (int t = 1; t < ac; t++)
    {
        std::string arg = av[t];
        for (auto &x : arg)
            x = toupper(x);
        std::cout << arg << " ";
    }
    std::cout << "\n";
}