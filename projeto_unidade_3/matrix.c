#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "matrix.h"

void populateWithRandom(float matrix[200][200], int rows, int columns,
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
 
void printMatrix(float matrix[200][200], int rows, int columns)
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

void setMatrixValue(float matrix[200][200], int row, int column,
 float value)
{
	matrix[row][column] = value; 
}

int sumMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int rows, int columns)
{
	int i, j;
	
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < columns; j++)
		{
			resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
		}
	}
	
	return 1;
}

int subtractMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int rows, int columns)
{
	int i, j;
	
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < columns; j++)
		{
			resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
		}
	}
	
	return 2;
}

int multiplyMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int firstMatrixRows, int firstMatrixColumns, int secondMatrixRows, 
 int secondMatrixColumns)
 {
	int i, j, k;
	
	
	for (i = 0; i < firstMatrixRows; ++i)
	{
		for (j = 0; j < secondMatrixColumns; ++j)
		{
			for (k = 0; k < secondMatrixRows; ++k)
			{
					resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
	
	return 3;
	 
 }

