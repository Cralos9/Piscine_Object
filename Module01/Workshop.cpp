#include "Workshop.hpp"

void Workshop::executeWorkDay()
{
    for(std::vector<Worker *>::iterator it = workers.begin(); it != workers.end(); it++)
        (*it)->work();
}


void Workshop::layoffWorker(Worker &worker)
{
    std::vector<Worker *>::iterator it;
    for(it = requestsToLeave.begin(); it != requestsToLeave.end(); it++)
    {
        if(*(*it) == worker)
            break;
    }
    if (it == requestsToLeave.end())
    {
        std::cout << "Worker didn't request to leave" << std::endl;
        return;
    }
    for(it = workers.begin(); it != workers.end(); it++)
    {
        if(*(*it) == worker)
        {
            workers.erase(it);
            std::cout << "Worker left the Workshop" << std::endl;
            return;
        }
    }
}

void Workshop::registLeave(Worker &worker)
{
    for(std::vector<Worker *>::iterator it = workers.begin(); it != workers.end(); it++)
    {
        if(*(*it) == worker)
        {
            requestsToLeave.push_back(&worker);
            return ;
        }
    }
    std::cout << "Worker does not work on this Workshop" << std::endl;
}

void Workshop::regist(Worker &worker)
{
    requestsToJoin.push_back(&worker);
}

void Workshop::addWorker(Worker &worker)
{
    for(std::vector<Worker *>::iterator it = requestsToJoin.begin(); it != requestsToJoin.end(); it++)
    {
        if(*(*it) == worker)
        {
            workers.push_back(&worker);
            std::vector<Workshop> workshops = worker.getWorkshops();
            workshops.push_back(*this);
            requestsToJoin.erase(it);
            return ;
        }  
    }
    std::cout << "Worker not registered" << std::endl;
}