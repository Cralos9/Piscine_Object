#pragma once

#include <iostream>
#include "Worker.hpp"
#include <vector>

class Worker;

class Workshop
{
    public:
        void executeWorkDay();
        void addWorker(Worker &worker);
        void layoffWorker(Worker &worker);
        void regist(Worker &worker);
        void registLeave(Worker &worker);
    private:
        std::vector<Worker *> requestsToJoin;
        std::vector<Worker *> requestsToLeave;
        std::vector<Worker *> workers;

};