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
//Elabore um algoritmo que leia um vetor inteiro de 10 posi��es e mostre os
//n�meros pares e os n�meros impares
