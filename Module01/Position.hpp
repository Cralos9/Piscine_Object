#pragma once

#include <iostream>

struct Position
{
    private:
        int _y;
        int _x;
        int _z;
    public:
        Position();
        Position(int x, int y, int z);
        int get_x();
        int get_y();
        int get_z();
};