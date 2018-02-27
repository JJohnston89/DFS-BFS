#include"my.h"

bool find(char key, VERTEX* array1, int size)
{
	int i;
	for(i = 0; i < size; i++)    //search for key
	{
		if(array1[i].c == key)    //found key?
		{
			break;             //exit loop
		}
	}

	if(i == size)             //gone to the end   
	{
		return false;     //can't find it
	}
	else
	{
		return true;    //found it
	}
}// end of find()
