#include"my.h"

int findVertex(VERTEX* array1, int size, char key)
{
	int i;
	for(i = 0; i < size; i++)    //search for key
	{
		if(array1[i].c == key)    //found key?
		{
			break;             //exit loop
		}
	}
		if(i == size)       //gone to the end   
		{
			return size;     //can't find it
		}
		else
		{
			return i;    //found it
		}
}//end of findVertex()
