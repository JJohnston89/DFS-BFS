#include"my.h"

void breadthFirstSearch(VERTEX* list, int nElems, int size)
{
	int Queue[1000];    //make queue	
	int front = 0;
	int rear = -1;
	int v2;
        int j;
	                                // begin at vertex 0
	list[0].isVisited = true;      // mark it  
	printf("%c ", list[0].c);      // display it		
	Queue[++rear] = 0;            // insert at tail

	while(!((rear + 1 == front) || (front+size-1 == rear)))    // until queue empty
	{
		int v1 = Queue[front++];   // remove vertex at head
                 // until it has no unvisited neighbors
		while((v2 = getAdjUnvisitedVertex(v1, nElems, list)) != -1)   // get one
		{
			list[v2].isVisited = true;     // mark it
			printf("%c ", list[v2].c);     // display it
 			Queue[++rear] = v2;            // insert it
		} // end while
	 }  // end while(queue not empty)

         // queue is empty, so we're done
        
         for(j=0; j < nElems; j++)      // reset flags
        	 list[j].isVisited = false;

}//end of breadthFirstSearch()
