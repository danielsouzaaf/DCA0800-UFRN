#ifndef VALIDATOR_H_
#define VALIDATOR_H_

int canSumMatrices(float matrixA[1000][1000], float matrixB[1000][1000],
 int rowsA, int columnsA, int rowsB, int columnsB);
 
int canSubtractMatrices(float matrixA[1000][1000],
 float matrixB[1000][1000], int rowsA, int columnsA, int rowsB,
  int columnsB);
  
int canMultiplyMatrices(float matrixA[1000][1000],
 float matrixB[1000][1000], int rowsA, int columnsA, int rowsB,
  int columnsB);
  
  
int isRowColumnInsideMatrixRowsAndColumns(float matrix[1000][1000],
 int rows, int columns, int row, int column);
  
#endif // VALIDATOR_H_
