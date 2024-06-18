#include <stdio.h>
#include <stdlib.h>

int ** allocateIntStarArray(int num);
int * allocateIntArray(int num);

int main()
{
	int columns, rows;
	int *rowPtr;
	int **ptrOfRows;

    scanf("%d %d", &columns, &rows); 
    
	
	ptrOfRows = allocateIntStarArray(rows);
	for (int i = 0; i < rows; i++)
	{
		rowPtr = allocateIntArray(columns);
		for (int j = 0; j < columns; j++)
		{
			scanf("%d",rowPtr+j);
			if (j==0) ptrOfRows[i] = rowPtr;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		rowPtr = ptrOfRows[i];
		for (int j = 0; j < columns; j++)
		{
			if (*(rowPtr+j)<100 ) printf("[ ]");
			if (*(rowPtr+j)>=100 && *(rowPtr+j)<=1000) printf("[*]");
			if (*(rowPtr+j)>1000 ) printf("[X]");
		}
		printf("\n");
	}
	

}

int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}

int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}