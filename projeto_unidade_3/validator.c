#include "validator.h"

int canSumMatrices(int rowsA, int columnsA, int rowsB, int columnsB)
{
	if (rowsA != rowsB || columnsA != columnsB)
	{
		return 0;
	}
	
	return 1;
}

int canSubtractMatrices(int rowsA, int columnsA, int rowsB, int columnsB)
{
	if (rowsA != rowsB || columnsA != columnsB)
	{
		return 0;
	}
	
	return 1;
}

int canMultiplyMatrices(int columnsA, int rowsB)
{
	if (columnsA != rowsB)
	{
		return 0;
	}
	
	return 1;
}

int isRowColumnInsideMatrixRowsAndColumns(int rows, int columns,
 int row, int column)
{
	if (row >= rows || column >= columns)
	{
		return 0;
	}
	
	return 1;
}
