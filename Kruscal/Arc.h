#ifndef ARC
#define ARC

#include "ModuleManage.h"

class Arc{
    public :
        int getPoids();
        void setPoids(int poids);
        void setNoeuds(Vertex noeud1, Vertex noeud2);

        //module de test
            void print(void);

    private :  
        Vertex noeud1;
        Vertex noeud2;
        int poids;
};


#endif //ARC