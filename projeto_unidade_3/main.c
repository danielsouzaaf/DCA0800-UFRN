#include <stdio.h>
#include "matrix.h"
#include "validator.h"

#define SOMA 1
#define SUBTRACAO 2
#define MULTIPLICACAO 3


int main(int argc, char **argv)
{
	float matrizA[200][200], matrizB[200][200], matrizC[200][200];
	float valor;
	int opcao, qtdLinhasA, qtdColunasA, qtdLinhasB, qtdColunasB;	
	int valMax, valMin;
	int qtdLinhasC, qtdColunasC;
	int linha, coluna;
	int ultimaOperacao;
	ultimaOperacao = 0;
	valor = 0.0;
	linha = coluna = 0;
	qtdLinhasA = qtdColunasA = qtdLinhasB = qtdColunasB = opcao = 0;
	qtdLinhasC = qtdColunasC = 0;
	valMax = valMin = 0;
	
	do
	{
		printf("PROGRAMA DE MANIPULACAO DE MATRIZES \n \
		 (1) Definir o tamanho da matriz A \n \
		 (2) Definir o tamanho da matriz B \n \
		 (3) Preencher a matriz A com valores aleatórios \n \
		 (4) Preencher a matriz B com valores aleatórios \n \
		 (5) Atribuir valor para um elemento da matriz A \n \
		 (6) Atribuir valor para um elemento da matriz B \n \
		 (7) Calcular A+B \n \
		 (8) Calcular A-B \n \
		 (9) Calcular A*B \n \
		(10) Imprimir matriz A \n \
		(11) Imprimir matriz B \n \
		(12) Imprimir matriz C \n \
		(13) Sair\n \
		Digite sua opção: " );
		scanf("%d", &opcao);
		
		switch (opcao)
		{
			case 1:
				//Definir o tamanho da matriz A
				printf("digite a quantidade de linhas da matriz A:");
				scanf("%d", &qtdLinhasA);
				printf("digite a quantidade de colunas da matriz A:");
				scanf("%d", &qtdColunasA);
				break;
			case 2:
				//Definir o tamanho da matriz B
				printf("digite a quantidade de linhas da matriz B:");
				scanf("%d", &qtdLinhasB);
				printf("digite a quantidade de colunas da matriz B:");
				scanf("%d", &qtdColunasB);
				break;
			case 3:
				//Preencher a matriz A com valores aleatórios
				printf("digite o valor mínimo para os números da matriz A:");
				scanf("%d", &valMax);
				printf("digite o valor máximo para os números da matriz A:");
				scanf("%d", &valMin);
				populateWithRandom(matrizA, qtdLinhasA, qtdColunasA,
				 valMax, valMin);
				break;
			case 4:
				//Preencher a matriz B com valores aleatórios
				printf("digite o valor mínimo para os números da matriz B:");
				scanf("%d", &valMax);
				printf("digite o valor máximo para os números da matriz B:");
				scanf("%d", &valMin);
				populateWithRandom(matrizB, qtdLinhasB, qtdColunasB,
				 valMax, valMin);
				break;
			case 5:
				//Atribuir valor para elemento da matriz A
				printf("digite a linha da matriz A que conterá o valor:");
				scanf("%d", &linha);
				printf("digite a coluna da matriz A que conterá o valor:");
				scanf("%d", &coluna);
				printf("digite o valor:");
				scanf("%f", &valor);
				
				if (isRowColumnInsideMatrixRowsAndColumns(qtdLinhasA,
				 qtdColunasA, linha, coluna) == 1){
					 setMatrixValue(matrizA, linha, coluna, valor);
					 printf("***o valor %f foi inserido com sucesso!***"
					 , valor);
				 }
				 else
				 {
					 printf("a linha %d e a coluna %d está fora das linhas e colunas definidas previamente.", linha, coluna);
				 }
				break;
			case 6:
				//Atribuir valor para elemento da matriz B
				printf("digite a linha da matriz B que conterá o valor:");
				scanf("%d", &linha);
				printf("digite a coluna da matriz B que conterá o valor:");
				scanf("%d", &coluna);
				printf("digite o valor:");
				scanf("%f", &valor);
				
				if (isRowColumnInsideMatrixRowsAndColumns(qtdLinhasB,
				  qtdColunasB, linha, coluna) == 1){
					 setMatrixValue(matrizB, linha, coluna, valor);
					 printf("***o valor %f foi inserido com sucesso!***"
					 , valor);
				 }
				 else{
					 printf("a linha %d e a coluna %d está fora das linhas e colunas definidas previamente.", linha, coluna);	
				 }
				break;
			case 7:
				//Calcular A+B
				if (canSumMatrices(qtdLinhasA, qtdColunasA, qtdLinhasB,
				 qtdColunasB) == 1){
					 ultimaOperacao = sumMatrices(matrizA, matrizB,
					  matrizC, qtdLinhasA, qtdColunasA);
					  printf("***soma das matrizes realizada com sucesso!***");
				 }
				else {
					printf("a quantidade de linhas e colunas das duas matrizes são diferentes. Não é possível somar!");
				}
				
				break;
			case 8:
				//Calcular A-B
				break;
			case 9:
				//Calcular A*B
				break;
			case 10:
				//Imprimir a matriz A
				printMatrix(matrizA, qtdLinhasA, qtdColunasA);
				break;
			case 11:
				//Imprimir a matriz B
				printMatrix(matrizB, qtdLinhasB, qtdColunasB);
				break;
			case 12:
				//Imprimir a matriz c
				if (ultimaOperacao == SOMA || ultimaOperacao == SUBTRACAO)
				{
					printMatrix(matrizC, qtdLinhasA, qtdColunasB);
				}
				else if(ultimaOperacao == 3)
				{
					printMatrix(matrizC, qtdColunasA, qtdLinhasB);
				}
				break;
				
		}
		printf("\n");
	}
	while (opcao < 13);
	
	
	return 0;
}

