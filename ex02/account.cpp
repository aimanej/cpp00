#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::checkAmount() const
{
    return _amount;
}

Account::Account(int initial_deposit)
{
    static int index = 0;
    _amount = initial_deposit;
    _accountIndex = index;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += _amount;

    std::cout << "index:" << index << ";ammount:" << _amount << ";created\n";
    index++;
}

Account::~Account(void)
{
    std::cout << "index:" << _accountIndex << ";ammount:" << _amount << ";closed\n";
}

void Account::displayAccountsInfos()
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::displayStatus() const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit)
{
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount;
    _nbDeposits++;
    std::cout << ";nb_deposits:" << _nbDeposits << "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if(_amount < withdrawal)
    {
        std::cout << "refused\n";
        return 0;
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << withdrawal << ";amount:" << _amount;
        std::cout << ";mn_withdrawals:" << _nbWithdrawals << "\n";
        return 1;
    }
}

