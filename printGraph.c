#include"my.h"

void printGraph(VERTEX* array1, int nElems)
{
	int i;
        EDGE* e;

	printf("Vertex    List Containing Adjacent Vertices\n");   //printing table
	printf("------    ---------------------------------\n");
    
	for(i=0; i<nElems; i++)
    	{		
        	printf("%c",array1[i].c);
		printf("          ");
        	e=array1[i].p; 
        	
		while(e)   //while edge is not null
        	{				
			printf("->%c",e->v->c);   //print list
             		e = e->q;                  //going to the next edge in the list
        	}
                printf("\n");
        }
}//end of printGraph()
