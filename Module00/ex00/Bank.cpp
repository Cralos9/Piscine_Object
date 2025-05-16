#include "Bank.hpp"


Bank::Bank(){
	_liquidity = 0;
	_accounts = 0;
}

Bank::~Bank(){

	for(std::vector<Account *>::iterator it = _clientAccounts.end() -1; it != _clientAccounts.begin() - 1; it--)
	{
		delete(*it);
		_clientAccounts.erase(it);
	}	
}

double Bank::bank_tax(double amount)
{
	double  tax = amount * 0.05;
	this->_liquidity += tax;
	return(tax);
}

void Bank::removeClient(int id)
{
	for (std::vector<Account *>::iterator it = _clientAccounts.begin(); it != _clientAccounts.end(); it++)
	{
		if((*it)->_id == id)
		{
			delete(*it);
			_clientAccounts.erase(it);
			return ;
		}
	}
	std::cout <<"User not found" << std::endl;

}

void Bank::giveLoan(int id, double amount)
{
	Account *account = get_clientIt(id);
	if(account->get_value() < amount || _liquidity < amount)
	{
		std::cout << "Loan denied" << std::endl;
		return;
	}
	account->set_value(amount);
	_liquidity -= amount;
}

void Bank::addClient(double amount)
{
	_clientAccounts.push_back(new Account(_accounts, amount - bank_tax(amount)));
	_accounts++;
}

Account* Bank::get_clientIt(int i)
{
	for (std::vector<Account *>::iterator it = _clientAccounts.begin(); it != _clientAccounts.end(); it++)
	{
		if((*it)->_id == i)
		{
			return (*it);
		}
	}
	return NULL;
}

void Bank::deposit(int id, double amount)
{
	Account *account = get_clientIt(id);
	if(!account)
	{
		std::cout << "No account with that Id!"<<std::endl;
		return ;
	}
	account->set_value(amount - bank_tax(amount));
}

void Bank::withdraw(int id, double amount)
{
	Account *account = get_clientIt(id);
	if(!account)
	{
		std::cout << "No account with that Id!"<<std::endl;
		return ;
	}
	if (amount > account->_value)
	{
		std::cout << "Not enough money"<<std::endl;
		return ;
	}
	account->set_value(-amount);
}

std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	std::vector<Account *> clientAccounts = p_bank._clientAccounts;
	p_os << "Bank informations : " << std::endl;
	p_os << "Liquidity : " << p_bank._liquidity << std::endl;
	for (std::vector<Account *>::iterator it = clientAccounts.end() -1; it != clientAccounts.begin() - 1; it--)
	  p_os << **it << std::endl;
	return (p_os);
}