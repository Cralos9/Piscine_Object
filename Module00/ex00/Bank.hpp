#pragma once

#include <iostream>
#include "Account.hpp"
#include <vector>

class Bank
{
    private:
        double _liquidity;
        int _accounts;
        std::vector<Account *> _clientAccounts;
    public:

        Bank();
        ~Bank();
        Account *get_clientIt(int i);
        friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);
        void giveLoan(int id, double amount);
        void addClient(double amount);
        void removeClient(int id);
        void deposit(int id, double amount);
        void withdraw(int id, double amount);
        double bank_tax(double amount);


};
