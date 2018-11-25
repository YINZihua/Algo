#include "Arc.h"

int Arc::getPoids()
{   return this.poids; }

void setPoids(int poids)
{   this.poids = poids;}

void setNoeuds(Vertex noeud1, Vertex noeud2)
{   this.noeud1 = noeud1; this.noeud2 = noeud2;}

void print(void)
{
    cout << "Arc()"
}