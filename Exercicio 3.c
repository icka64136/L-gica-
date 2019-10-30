#include<stdio.h>
main()
{
	int x [6],i,cont;
	
	cont=0;
	
	for(i=0; i<6; i++)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x[i]);
	
	
		
		if(x[i]%2==1)
		{
			cont=cont+x[i];
		}
		else
		{
			cont=cont;
		}
	}	
	printf("Soma dos Numeros Impares : %d \n",cont);
}
//Elabore um algoritimo que leia um vetor de 6 posições e mostre a soma dos
//números impares
