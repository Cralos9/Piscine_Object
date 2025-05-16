#pragma once

#include <iostream>
#include "Worker.hpp"

class Worker;

class Hammer : public Tool
{
    public:
        ~Hammer();
        void use();
        Hammer();
        int getNumberOfUses();
    protected:
};