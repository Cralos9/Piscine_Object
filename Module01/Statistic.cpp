#include "Statistic.hpp"

Statistic::Statistic()
{
    _level = 0;
    _exp = 0;
}

Statistic::Statistic(int exp, int level)
{
    _level = level;
    _exp = exp;
}


int Statistic::get_exp()
{
    return(_exp);
}

int Statistic::get_level()
{
    return(_level);
}