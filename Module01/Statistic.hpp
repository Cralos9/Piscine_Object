#pragma once


#include <iostream>


struct Statistic
{
    private:
        int _exp;
        int _level;
    public:
        Statistic();
        Statistic(int exp, int level);
        int get_exp();
        int get_level();
};