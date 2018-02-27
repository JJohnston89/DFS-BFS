#include"my.h"

void createEdge(VERTEX* array1, int size, char* file_name)
{
	FILE* spIN;
	int count = 0;
	int i = 0;
	char ch1, ch2;
	int index1, index2;
	
	spIN = fopen(file_name, "r");   //open file to read
	
	if(spIN == NULL)     //if file can't open then exit program
   	{
		printf("Could not open");
	    	exit(0);
    	}		       
	
	while((fscanf(spIN, "%c %c ", &ch1, &ch2)) != EOF)     //reading two chars at a time
	{			
		if(ch1 != ' ' && ch1 != '\n')      //ignore spaces and new lines
		{
			index1 = findVertex(array1, size, ch1);    //find the vertex with that char key
		}
		if(ch2 != ' ' && ch2 != '\n')
		{
			index2 = findVertex(array1, size, ch2);
		}			
			
		makeEdge(index1, index2, array1);   //make edge
						
		
	}
	fclose(spIN);

}//end of createEdge()

