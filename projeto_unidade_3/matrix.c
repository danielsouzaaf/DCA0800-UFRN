#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matrix.h"

void populateWithRandom(float matrix[1000][1000], int columns, int rows,
  int minValue, int maxValue)
 {
	 srand(time(NULL));
	 int i, j;
	 
	 for (i = 0; i < rows; ++i)
	 {
		 for(j = 0; j < columns; ++j)
		 {
			 //TODO: perguntar ao professor como gerar um float aleatório com um valor máximo e um mínimo
			 //matrix[i][j] = ((float)rand() / (maxValue - minValue)) + minValue;
			 matrix[i][j] = (rand() % (maxValue - minValue)) + minValue;

		 }
	 }
	 
 }
 
void printMatrix(float matrix[1000][1000], int columns, int rows)
{
	int i, j;
	printf("representação gráfica da matriz: \n");
	for (i = 0; i < rows; ++i)
	{
		 for(j = 0; j < columns; ++j)
		 {
			 printf("%8.3f	", matrix[i][j]);
		 }
		 printf("\n");
	}
	printf("fim da representação gráfica\n");

	
}

