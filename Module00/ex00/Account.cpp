#include "Account.hpp"

Account::Account(int id, double value)
{
    _id = id;
    _value = value;
}

int Account::get_id() const
{
    return(_id);
}
double Account::get_value() const
{
    return(_value);
}

void Account::set_value(const double value)
{
    _value += value;
}

std::ostream& operator<<(std::ostream& p_os, const Account& p_account)
{
	p_os << "[" << p_account.get_id() << "] - [" << p_account.get_value() << "]";
	return (p_os);
}