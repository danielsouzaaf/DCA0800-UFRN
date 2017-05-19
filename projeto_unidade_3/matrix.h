#ifndef MATRIX_H_
#define MATRIX_H_

void populateWithRandom(float matrix[1000][1000], int columns, int rows,
  int minValue, int maxValue);
  
void setMatrixValue(float matrix[1000][1000], int columns, int rows,
  float value);
  
void printMatrix(float matrix[1000][1000], int columns, int rows);

void sumMatrix(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int columns, int rows);
 
void sumMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int columns, int rows);

void subtractMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int columns, int rows);
 
void multiplyMatrices(float firstMatrix[1000][1000],
 float secondMatrix[1000][1000], float resultMatrix[1000][1000], 
 int columns, int rows);

#endif // MATRIX_H_
