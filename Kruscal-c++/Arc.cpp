#include "ModuleManage.h"

Arc::Arc(){}

int Arc::getPoids(void)
{   return poids; }

void Arc::setPoids(int _poids)
{   poids = _poids;}

void Arc::setNoeuds(Vertex _noeud1, Vertex _noeud2)
{   noeud1 = _noeud1; noeud2 = _noeud2;}

void Arc::print(void)
{   std::cout<<"Arc("<<noeud1.getName()<<","<<noeud2.getName()<<")|"<<poids;}