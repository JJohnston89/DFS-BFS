#include"my.h"

void depthFirstSearch(VERTEX* list, int nElems)  
{   
	int stack[1000];  //make stack		
	int top = -1;
	int index = 0;
        int j;
                                       // begin at vertex 0
	list[0].isVisited = true;      // mark it
	printf("%c ", list[0].c);      // display it		
	stack[++top] = 0;             // push it	
		
                                             

        while(top != -1 )   // until stack empty      
        {        
                // get an unvisited vertex adjacent to stack top         
		index = getAdjUnvisitedVertex(stack[top], nElems, list);
		 
		if(index == -1 || list[index].isVisited == true)   // if no such vertex                    
           	{
			top--;    //pop it
			   
		}		 
                else                          
            	{				
			list[index].isVisited = true;    // mark it  
			printf("%c ", list[index].c);    // display it             
			stack[++top] = index;            // push it
				
		}
         }  // end while

      // stack is empty, so we're done
      for(j=0; j<nElems; j++)          // reset flags
         list[j].isVisited = false;
      }  // end of depthFirstSearch()
