#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


/* Forward declaration */
struct EDGETAG;


typedef struct
{
    char c;
    bool isVisited;
    struct EDGETAG* p;
} VERTEX;


typedef struct EDGETAG
{
    VERTEX* v;
    struct EDGETAG* q;
} EDGE;



typedef struct 
{
	int top;
	int* stackArray;
} STACK;

int main(int argc, char *argv[]);

VERTEX* getData(char* file_name, int* size, int* nElems);

int getSize(char* file_name);

bool find(char key, VERTEX* array1, int size);

void createEdge(VERTEX* array1, int size, char* file_name);

int findVertex(VERTEX* array1, int size, char key);

void printGraph(VERTEX* array1, int nElems);

void makeEdge(int vertex1, int vertex2, VERTEX* array1);

void depthFirstSearch(VERTEX* list, int nElems);

int getAdjUnvisitedVertex(int index, int nElems, VERTEX* array1);

void breadthFirstSearch(VERTEX* list, int nElems, int size);

