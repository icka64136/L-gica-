#include<stdio.h>
main()
{
	int n [10],i;
		
	for(i=0; i<10; i++)
	{
		printf("Entre com um Valor : \n");
		scanf("%d",&n[i]);
	}
	for(i=0; i<10; i++)
	{
		if(n[i]%2==0)
		{
			printf("Par : %d \n",n[i]);
		}
		else
		{
			printf("Impar : %d \n", n[i]);
		}
		
	}	
}
//Elabore um algoritmo que leia um vetor inteiro de 10 posições e mostre os
//números pares e os números impares
