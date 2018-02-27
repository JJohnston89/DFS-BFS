#include"my.h"

VERTEX* getData(char* file_name, int* size, int* nElems)
{

        FILE* spIN;
	VERTEX* newArray;
	char ch;		
	int i, x;
	int j = 0;
	int k = 0;
		
		

    spIN = fopen(file_name, "r");     //open file to read
		
    if(spIN == NULL)                  //if the file can't open
    {                                 //exit the program
       printf("Could not open");
	   exit(0);
    }		       
				
	newArray = (VERTEX*)calloc(*size, sizeof(VERTEX));    //making new array type vertex		
		
    for(i = 0; i  < *size; i++)
	{
	    fscanf(spIN, "%c ", &ch);                  //reading a char at a time
			
		if(find(ch, newArray, *size) == false)    //if we find a char then ignore it
		{
			VERTEX* a = (VERTEX*)malloc(sizeof(VERTEX));   //make a new vertex
			a->c = ch;
			a->isVisited = false;
			a->p = NULL;
			newArray[k] = *a;         //insert new vertex into the array												
			*nElems = *nElems + 1;   //add one to nElems
			k++;				
		}			

	}        
	fclose(spIN);	
		
	return newArray;	
} //end of getData()
