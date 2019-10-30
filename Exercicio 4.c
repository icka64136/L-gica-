#include<stdio.h>
main()
{
	int x[20],i;
	
	for(i=0; i<20; i++)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x[i]);
	}
	
	for(i=0; i<20; i++)
	{
				if(x[i]%2==0)
		{
			printf("Posicao dos Numero Par : %d \n",i);
		}
		else
		{
			x;
		}
	}
	
}
//Elabore um algoritimo que leia um vetor de 20 posições e mostre a posição dos
//números pares.
