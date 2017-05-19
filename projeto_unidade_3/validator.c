#include "validator.h"

int canSumMatrices(float matrixA[1000][1000], float matrixB[1000][1000],
 int rowsA, int columnsA, int rowsB, int columnsB)
{
	if (rowsA != rowsB || columnsA != columnsB)
	{
		return 0;
	}
	
	return 1;
}

int canSubtractMatrices(float matrixA[1000][1000],
 float matrixB[1000][1000], int rowsA, int columnsA, int rowsB,
  int columnsB)
{
	if (rowsA != rowsB || columnsA != columnsB)
	{
		return 0;
	}
	
	return 1;
}

int canMultiplyMatrices(float matrixA[1000][1000], float matrixB[1000][1000],
 int rowsA, int columnsA, int rowsB, int columnsB)
{
	if (columnsA != rowsB)
	{
		return 0;
	}
	
	return 1;
}

int isRowColumnInsideMatrixRowsAndColumns(float matrix[1000][1000],
 int rows, int columns, int row, int column)
{
	if (row >= rows || column >= columns)
	{
		return 0;
	}
	
	return 1;
}
