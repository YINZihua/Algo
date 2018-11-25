#ifndef GRAPH
#define GRAPH

#include "ModuleManage.h"

/***********************************************
    organization of graph matrix :

    graph example case : 
        dimension : 6*6
        edges     : (1,2)#21;(1,3)#17;(1,5)#11;(1,6)#9
                    (2,3)#07;(2,4)#18;(2,5)#03
                    (3,4)#09;(3,6)#19
                    (4,5)#23;(4,6)#20
                    (5,6)#12

        line    1---2---3---4---5---6
    rang        |   |   |   |   |   |
        1-------00--21--17--00--11--09
        |       |   |   |   |   |   |
        2-------21--00--07--18--03--00
        |       |   |   |   |   |   |
        3-------17--07--00--09--00--19
        |       |   |   |   |   |   |
        4-------00--18--09--00--23--20
        |       |   |   |   |   |   |
        5-------11--03--00--23--00--12
        |       |   |   |   |   |   |
        6-------09--00--19--20--12--00


***********************************************/


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