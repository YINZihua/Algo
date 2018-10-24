#include "MST.h"

int father[ORDER_GRAPH];

MST::MST()
{   for(int i = 0; i < ORDER_GRAPH; i++) father[i] = i; }

void MST::setFather(int vertex, int dad)
{   father[vertex] = dad; }

int getFather(int vertex)
{   return father[vertex]; }