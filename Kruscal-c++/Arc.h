#ifndef ARC
#define ARC

#include "ModuleManage.h"

class Arc{
    private : 
        Vertex noeud1;
        Vertex noeud2;
        int poids;

    public :
        int getPoids(void);
        void setPoids(int _poids);
        void setNoeuds(Vertex _noeud1, Vertex _noeud2);

        //module de test
            void print(void);
};

#endif //ARC