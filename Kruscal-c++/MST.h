#ifndef MST_CLASS
#define MST_CLASS

#include "ModuleManage.h"

class MST
{
    public: 
        MST();
        
        void setFather(int vertex, int father);

        int getFather(int vertex);
};

#endif //MSTi