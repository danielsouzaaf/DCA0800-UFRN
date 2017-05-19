#include <stdio.h>
#include "matrix.h"

int main(int argc, char **argv)
{
	float matrizA[1000][1000], matrizB[1000][1000];// matrizC[1000][1000];
	
	int opcao, qtdLinhasA, qtdColunasA, qtdLinhasB, qtdColunasB;	
	int valMax, valMin;
	int qtdLinhasC, qtdColunasC;
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
				printf("digite a quantidade de linhas da matriz A:");
				scanf("%d", &qtdLinhasA);
				printf("digite a quantidade de colunas da matriz A:");
				scanf("%d", &qtdColunasA);
				break;
			case 2:
				printf("digite a quantidade de linhas da matriz B:");
				scanf("%d", &qtdLinhasB);
				printf("digite a quantidade de colunas da matriz B:");
				scanf("%d", &qtdColunasB);
				break;
			case 3:
				printf("digite o valor mínimo para os números da matriz A:");
				scanf("%d", &valMax);
				printf("digite o valor máximo para os números da matriz A:");
				scanf("%d", &valMin);
				populateWithRandom(matrizA, qtdColunasA, qtdLinhasA,
				 valMax, valMin);
				break;
			case 4:
				printf("digite o valor mínimo para os números da matriz B:");
				scanf("%d", &valMax);
				printf("digite o valor máximo para os números da matriz B:");
				scanf("%d", &valMin);
				populateWithRandom(matrizB, qtdColunasB, qtdLinhasB,
				 valMax, valMin);
				break;
			case 5:
				//Atribuir valor para elemento da matriz A
				break;
			case 6:
				//Atribuir valor para elemento da matriz B
				break;
			case 7:
				//Calcular A+B
				break;
			case 8:
				//Calcular A-B
				break;
			case 9:
				//Calcular A*B
				break;
			case 10:
				printMatrix(matrizA, qtdColunasA, qtdLinhasA);
				break;
			case 11:
				printMatrix(matrizB, qtdColunasB, qtdLinhasB);
				break;
			case 12:
				//Imprimir a matriz c
				break;
				
		}
		printf("\n");
	}
	while (opcao < 13);
	
	
	return 0;
}

