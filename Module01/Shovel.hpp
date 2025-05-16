#pragma once

#include <iostream>
#include "Worker.hpp"

class Worker;

class Shovel : public Tool
{
    public:
        ~Shovel();
        void use();
        Shovel();
        int getNumberOfUses();
    protected:
};