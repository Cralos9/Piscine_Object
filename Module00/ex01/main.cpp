#include "Graph.hpp"


int main()
{
    Vector2 vec(80, 80);
    std::vector<Vector2> vector;
    vector.push_back(vec);
    vector.push_back(Vector2(10,10));
    Graph graph = Graph(vec, vector);
    Vector2 vec2(0,0);
    graph.addNewPair(vec2);
    graph.drawGraph();

}