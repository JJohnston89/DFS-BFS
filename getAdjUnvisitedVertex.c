#include"my.h"

int getAdjUnvisitedVertex(int index, int nElems, VERTEX* array1)
{
	int indexFind = 0;
	EDGE* e;	 
	char ch;
	e=array1[index].p;
        
	while(e)   //while edge is not null
        {				
		if(e->v->isVisited == false) //unvisited vertex
		{				
			ch = e->v->c;   //get char key
			indexFind = findVertex(array1, nElems, ch); //find the vertex
			return indexFind;   //return index
		}
        	e = e->q;  //go to the next edge
        }
	return -1;   //did not find it
}// end of getAdjUnvisitedVertex()
