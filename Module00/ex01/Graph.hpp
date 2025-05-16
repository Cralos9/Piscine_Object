#pragma once

#include <iostream>
#include <vector>
#include "Vector2.hpp"


class Graph
{
    public:
        Graph(Vector2 size, std::vector<Vector2> vectors);
        void addNewPair(Vector2 pair);
        void drawGraph();
        bool isThereVec(float x, float y);
    private:
        Graph();
        Vector2 _size;
        std::vector<Vector2> _vec;

};