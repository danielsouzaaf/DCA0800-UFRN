#include <stdio.h>
#include "matrix.h"

int main(int argc, char **argv)
{
	float matrizA[1000][1000];//, matrizB[1000][1000], matrizC[1000][1000];
	
	int opcao, qtdLinhasA, qtdColunasA, qtdLinhasB, qtdColunasB;	
	int valMax, valMin;
	qtdLinhasA = qtdColunasA = qtdLinhasB = qtdColunasB = opcao = 0;
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
				printf("digite a quantidade de linhas da matriz a:");
				scanf("%d", &qtdLinhasA);
				printf("digite a quantidade de colunas da matriz a:");
				scanf("%d", &qtdColunasA);
				break;
			case 3:
				printf("digite o valor mínimo para os números da matriz a");
				scanf("%d", &valMax);
				printf("digite o valor máximo para os números da matriz b:");
				scanf("%d", &valMin);
				populateWithRandom(matrizA, qtdColunasA, qtdLinhasA,
				 valMax, valMin);
				break;
			case 10:
				printMatrix(matrizA, qtdColunasA, qtdLinhasA);
				
		}
	}
	while (opcao < 13);
	
	
	return 0;
}

