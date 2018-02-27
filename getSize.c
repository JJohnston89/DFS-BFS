#include"my.h"

int getSize(char* file_name)
{
	FILE* spIN;	
	int count = 0;
    	char ch;

    	spIN = fopen(file_name, "r");   //open file to read
		
    	if(spIN == NULL)               //if file can't open then exit the program
    	{
        	printf("Could not open");
		exit(0);
   	 }

   	while ((ch = fgetc(spIN)) != EOF)
   	{
		if(ch != ' ' && ch != '\n')  //ignore spaces and new lines
	   	{
			count++;    //count char
	   	}
		
   	}
   	fclose(spIN);
   	return count;
} //end of getSize()
