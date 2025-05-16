#pragma once

#include <iostream>


class Account
{
    public:
        friend std::ostream& operator<<(std::ostream& p_os, const Account& p_account);
    
    private:
        friend class Bank;    

        int get_id() const;
        double get_value() const;
        void set_id(const int id);
        void set_value(const double value);
        Account(int id, double value);
        int _id;
        double _value;
};
