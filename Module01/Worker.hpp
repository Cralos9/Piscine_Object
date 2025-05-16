#pragma once

#include "Position.hpp"
#include "Statistic.hpp"
#include "Tool.hpp"
#include "Workshop.hpp"
#include <vector>

class Tool;
class Workshop;

class Worker
{
    private:
        Position coordonnee;
        Statistic stat;
        std::vector<Tool *> _tools;
        std::vector<Workshop> workshops;
    public:
        Worker();
        Worker(Position coords, Statistic stats);
        ~Worker();
        void giveTool(Tool *tool);
        void removeTool(Tool *tool);
        std::vector<Tool *> get_Tools();
        void print_stats();
        void print_pos();
        void work();
        std::vector<Workshop> getWorkshops();
        bool operator==(const Worker& other) const;
        void requestJob(Workshop &workshop);
        void requestLeave(Workshop &workshop);
};