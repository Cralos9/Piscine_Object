#include "Graph.hpp"

Graph::Graph(Vector2 size, std::vector<Vector2> vectors) : _size(size)
{
    _vec = vectors;

}

void Graph::addNewPair(Vector2 pair)
{

    _vec.push_back(pair);
}

bool Graph::isThereVec(float x, float y)
{
    std::pair<float,float> pos = std::make_pair(x, y);
    for(std::vector<Vector2>::iterator it = _vec.begin(); it != _vec.end(); it++)
    {
        if(it->get_pos() == pos)
            return(1);
    }
    return(0);
}

#include <iomanip> 

void Graph::drawGraph()
{
    int max_y = _size.get_pos().second;
    int max_x = _size.get_pos().first;

    for (int y = max_y; y >= 0; --y)
    {
        std::cout << "& " << std::setw(2) << y;
        for (int x = 0; x <= max_x; ++x)
        {
            if (isThereVec(x, y))
                std::cout << " X";
            else
                std::cout << " .";
        }
        std::cout << std::endl;
    }

    std::cout << "    ";
    for (int x = 0; x <= max_x; ++x)
        std::cout << std::setw(2) << x;
    std::cout << std::endl;
}
