#include "Position.hpp"

Position::Position()
{
    _x = 0;
    _y = 0;
    _z = 0;
}

Position::Position(int x, int y, int z)
{
    _x = x;
    _y = y;
    _z = z;
}


int Position::Position::get_x()
{
    return(_x);
}

int Position::get_y()
{
    return(_y);
}

int Position::get_z()
{
    return(_z);
}