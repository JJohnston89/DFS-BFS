#include"my.h"

void makeEdge(int vertex1, int vertex2, VERTEX* array1)
{
	VERTEX *a, *b;
	a = &array1[vertex1];    //setting vertex1 to a
	b = &array1[vertex2];    //setting vertex2 to b
	EDGE* newEdge = (EDGE*)malloc(sizeof(EDGE));  //making new edge
        EDGE* current;  //iterater

	newEdge->v = b; 
        newEdge->q = NULL;  //setting edge pointer to null  

    if(a->p == NULL)   //if list is empty insert edge at the head
	{
		a->p = newEdge;      		 		 
	}
	else
	{
		
		current = a->p;
		while(current->q != NULL)
		{
			current = current->q; //going to the next edge in the list
		}
		current->q = newEdge;    //inserting the newEdge at the end of the list

	   
     	}
		  		  		  
	 
} //end of makeEdge()
