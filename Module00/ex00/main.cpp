#include <iostream>
#include <vector>
#include "Bank.hpp"

int main()
{
    Bank bank = Bank();
    bank.addClient(100);
    bank.addClient(100);
    bank.addClient(100);

    Account *accountA = bank.get_clientIt(0);
    Account *accountB = bank.get_clientIt(1);
    Account *accountC = bank.get_clientIt(2);

    std::cout << "AccountA : " << std::endl;
    std::cout << *accountA << std::endl;
    std::cout << "AccountB : " << std::endl;
    std::cout << *accountB << std::endl;
    std::cout << "AccountC : " << std::endl;
    std::cout << *accountC << std::endl;

    bank.removeClient(1);


    bank.deposit(0, 200);
    bank.addClient(100);
    bank.withdraw(2, 100);
    bank.giveLoan(0, 30);

    std::cout << " ----- " << std::endl;
    std::cout << "Bank : " << std::endl;
    std::cout << bank << std::endl;

    return (0);
}
