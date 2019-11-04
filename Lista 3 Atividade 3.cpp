#include<stdio.h>
main()
{
	int i,cp=0,ci=0;
	int par[6];
	int impar[6];
	int x[6];
	
	for(i=0; i<6; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&x[i]);
	}
	for(i=0; i<6; i++)
	{
		if (x[i]%2==0)
		{
			
			par[cp]=x[i];
			cp++;
			printf("Par : %d , posicao : %d \n" ,par[cp], cp);
		}
		else
		{
			impar[ci]=x[i];
			ci++;
			printf("Impar : %d , posicao :%d \n" , impar[ci] , ci);
		}
	}
	
	
}
/* Elabore um algoritmo leia um vetor X de 6 valores inteiros.
Pegue os valores pares do vetor X e jogue no vetor de nome PAR
Pegue os valore impares do vetor X e jogue no vetor de nome IMPAR
Depois imprima os vetores PAR e IMPAR */
