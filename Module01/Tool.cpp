#include "Tool.hpp"

Tool::Tool()
{
    currentWorker = NULL;
    numberOfUses = 10;
}

Tool::~Tool()
{
    currentWorker->removeTool(this);
}

void Tool::use()
{
    std::cout << "I must dig" << std::endl;
    numberOfUses--;
}

void Tool::setCurrentWorker(Worker *worker)
{
    if(currentWorker)
        currentWorker->removeTool(this);
    currentWorker = worker;
}

int Tool::getNumberOfUses()
{
    return(numberOfUses);
}

std::string Tool::get_type()
{
    return(_type);
}