#include<stdio.h>
main()
{
	int i,cp=0,ci=0,p=0,ii=0;
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
			
			par[p]=x[i];
			p++;		
		}
		else
		{
			impar[ii]=x[i];
			ii++;
			
		}
	}
	for(i=0; i<p; i++) //For Para o Par : Corre na Posição P
	{
		printf("Numeros Pares: %d e Posicao : %d \n",par[i], i);
	}
	for(i=0; i<ii; i++) // For para o Impar: Corre na Posição ii
	{
		printf("Numeros Imares: %d  e posicao : %d \n",impar[i],i);
	}
	
}
/* Elabore um algoritmo leia um vetor X de 6 valores inteiros.
Pegue os valores pares do vetor X e jogue no vetor de nome PAR
Pegue os valore impares do vetor X e jogue no vetor de nome IMPAR
Depois imprima os vetores PAR e IMPAR */
