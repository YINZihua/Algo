#ifndef GRAPH
#define GRAPH

#include <vector>
#include "Constant.h"

typedef struct{
    int inner;
    int outer;
}Arc;

class Graph{
    public : 
        void setEdge(int inner, int outer, int weight);

        void deleteEdge(int inner, int outer);

        std::vector<int> getAdjacent(int vertex);      

    private : 
        int graph[ORDER_GRAPH][ORDER_GRAPH];

        std::vector<Arc> arc;
};

#endif //GRAPH