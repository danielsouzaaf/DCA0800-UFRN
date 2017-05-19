#ifndef MATRIX_H_
#define MATRIX_H_

void populateWithRandom(float matrix[200][200], int rows, int columns,
  int minValue, int maxValue);
  
void setMatrixValue(float matrix[200][200], int row, int column,
  float value);
  
void printMatrix(float matrix[200][200], int rows, int columns);
 
void sumMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int rows, int columns, int resultRows, int resultColumns);

void subtractMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int rows, int columns, int resultRows, int resultColumns);
 
void multiplyMatrices(float firstMatrix[200][200],
 float secondMatrix[200][200], float resultMatrix[200][200], 
 int rows, int columns, int resultRows, int resultColumns);

#endif // MATRIX_H_
