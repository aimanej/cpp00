#include <iostream>
#include <string>

namespace Color
{
    const std::string reset = "\033[0m";
    const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string yellow = "\033[33m";
    const std::string blue = "\033[34m";
    const std::string magenta = "\033[35m";
    const std::string cyan = "\033[36m";
    const std::string white = "\033[37m";
}

int main()
{
    std::string buff;
    std::cout << Color::red << "***************************WELCOME***************************" << Color::reset << "\n";
    std::cout << Color::green << "Current Quantitative Ammount:" << Color::reset;
    std::cin >> buff;
    float amm(std::stof(buff));

    std::cout << Color::green << "Number of days:" << Color::reset;
    std::cin >> buff;
    int days(std::stoi(buff));
    // std::cout << "current ammount " << amm << "\n";
    // std::cout << "number of days " << days << "\n";

    int t = 1;
    while (days)
    {
        float perc;
        if (amm <= 199)
            perc = 18.98;
        else if (amm >= 200 && amm < 400)
            perc = 19.28;
        else if (amm >= 400 && amm < 800)
            perc = 19.68;
        else if (amm >= 800 && amm < 1600)
            perc = 20.18;
        else if (amm >= 1600)
            perc = 20.78;
        float gain = (amm / 100) * perc;
        gain -= (gain / 100) * 2;
        amm += gain;
        std::cout << Color::red << "day :" << Color::reset << t;
        std::cout << Color::red << " - quantitative ammount:" << Color::reset << amm;
        std::cout << Color::red << " - daily gain " << Color::reset << gain << "\n";
        t++;
        days--;
    }
}