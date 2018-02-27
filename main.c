#include"my.h"

int main(int argc, char *argv[] )
{
 
	VERTEX* array1;
 	int size; 
 	int nElems = 0;

 	size = getSize(&*argv[1]);                       //call getSize
 	array1 = getData(&*argv[1], &size, &nElems);     //call getData
 	createEdge(array1, size, &*argv[1]);             //call createEdge
 	printGraph(array1,nElems);                      //call printGraph
 
 	printf("\n");
 	printf("Depth First Search\n");  //print depth header
 	printf("------------------\n");
 	depthFirstSearch(array1, nElems);   //call depth first search and print

 	printf("\n\n");
 	printf("Breadth First Search\n");   //print breadth header
 	printf("------------------\n");
 	breadthFirstSearch(array1, nElems, size);   //call breadth first search and print
 	printf("\n");

        return 0;
 }//end of main()
