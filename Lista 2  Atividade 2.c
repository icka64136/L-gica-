#include<stdio.h>
main()
{
	int vet[5],i,pos=0,impar=0;
	
	for(i=0; i<5; i++)
	{
		printf("Digite um Valor: \n");
		scanf("%d",&vet[i]);
	}
	for(i=0; i<5; i++)
	{
		if(vet[i]>0)
		{
			pos++;
		}
		else
		{
			pos=pos;
		}
		if(vet[i]%2==0)
		{
			impar=impar;
		}
		else
		{
			impar++;
		}
	}
	printf("Existem %d Numeros Positivos e %d Numeros Impares \n ",pos,impar);
}
/*Elabore um algoritimo que leia um vetor de 10 posições e imprima quantos
números são positivos e quantos são impar.*/
