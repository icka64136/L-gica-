#include<stdio.h>
main()
{
	int x [10],i,cont;
	
	cont=0;
	
	for(i=0; i<10; i++)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x[i]);
	}
	for(i=0; i<10; i++)
	{
		if(x[i]%2==0)
		{
			cont=cont+1;
		}
		else
		{
			cont=cont;
		}		
	}
	printf("Tem : %d Numeros Pares \n",cont);	
}
//Elabore um algoritimo que leia um vetor de 10 posições e imprima a quantidade
//de números pares
