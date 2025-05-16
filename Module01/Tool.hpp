#pragma once

#include <iostream>
#include "Worker.hpp"
#include <algorithm>

class Worker;

class Tool
{
    public:
        virtual void use() = 0;
        virtual ~Tool();
        Tool();
        void setCurrentWorker(Worker *worker);
        int getNumberOfUses();
        std::string get_type();
    protected:
        Worker *currentWorker;
        int numberOfUses;
        std::string _type;
};