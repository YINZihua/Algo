#include "Graph.h"

//this is a graph bi-oriented


//Vertex functions
    // void 

//Arc function

//Graph function
    void Graph::setEdge(int inner, int outer, int weight)
    {   graph[inner][outer] = weight; graph[outer][inner] = weight; }

    void Graph::deleteEdge(int inner, int outer)
    {   graph[inner][outer] = 0; graph[outer][inner] = 0; }

    std::vector<int> Graph::getAdjacent(int vertex)
    {
        std::vector<int> adjacent;
        for(int i = 0; i < ORDER_GRAPH; i++)
            if(graph[vertex][i] != 0) 
                adjacent.push_back(graph[vertex][i]);
        return adjacent;
    }

    