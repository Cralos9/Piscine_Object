#include "Worker.hpp"

Worker::Worker()
{
    coordonnee = Position();
    stat = Statistic();
}

Worker::Worker(Position pos, Statistic stats)
{
    coordonnee = pos;
    stat = stats;
}

Worker::~Worker(){}

void Worker::giveTool(Tool *tool)
{
    tool->setCurrentWorker(this);
    _tools.push_back(tool);
}

void Worker::removeTool(Tool *tool)
{
   for(std::vector<Tool *>::iterator it = _tools.begin(); it != _tools.end(); it++)
   {
        if (*it == tool)
        {
            _tools.erase(it);
            return;
        }
   }
}

std::vector<Tool *> Worker::get_Tools()
{
    // if(_Tool == NULL)
    //     std::cout << "There's no Tool" << std::endl;
    return(_tools);
}

bool Worker::operator==(const Worker& other) const {
    return this == &other;
}

void Worker::requestJob(Workshop &workshop)
{
    std::cout << "Worker requested a job" << std::endl;
    workshop.regist(*this);
}

void Worker::requestLeave(Workshop &workshop)
{
    std::cout << "Worker requested to leave job" << std::endl;
    workshop.registLeave(*this);
}

void Worker::work()
{
    std::cout << "CAN WE FIX IT ... YES WE CAN" << std::endl;
    for(std::vector<Tool *>::iterator it = _tools.begin();it != _tools.end(); it++)
    {
        (*it)->use();
    }
}

std::vector<Workshop> Worker::getWorkshops()
{
    return(workshops);
}

void Worker::print_pos()
{
    std::cout << "X: " << coordonnee.get_x() << " Y: " << coordonnee.get_y() << " Z: " << coordonnee.get_z() << std::endl; 
}

void Worker::print_stats()
{
    std::cout << "Exp: " << stat.get_exp() << " Level: " << stat.get_level() << std::endl;
}