#include<stdio.h>
main()
{
	float media,soma=0,vet[6],cont;
	int i;
	
	for(i=0; i<6; i++)
	{
		printf("Digite um Valor \n");
		scanf("%f",&vet[i]);		
	}
	for(i=0; i<6; i++)
	{
		if(vet[i]<10)
		{
			soma=soma+vet[i];
			cont++;
		}
		else
		{
			soma=soma;
			cont=cont;
		}
	}
	printf("Soma Dos Menores que 10 : %.0f \n",soma);	
	printf("Quantidade Dos Menores que 10 : %.0f \n",cont);	
	printf("Media Dos Menores que 10 : %.1f \n",soma/cont);	
}
/* Elabore um algoritimo que leia um vetor de 6 posições e mostre a soma.
A média e a quantidade de números menores que 10. */
