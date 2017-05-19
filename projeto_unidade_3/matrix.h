#ifndef MATRIX_H_
#define MATRIX_H_

void populateWithRandom(float matrix[1000][1000], int rows, int columns,
  int minValue, int maxValue);
  
void setMatrixValue(float matrix[1000][1000], int row, int column,
  float value);
  
void printMatrix(float matrix[1000][1000], int rows, int columns);

void sumMatrix(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int rows, int columns);
 
void sumMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int rows, int columns);

void subtractMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int rows, int columns);
 
void multiplyMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int rows, int columns);

#endif // MATRIX_H_
