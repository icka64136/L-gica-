#include<stdio.h>
main()
{
	int i,Cont=0;
	float nota[5],cont=0,soma;
	
	for(i=0; i<5; i++)
	{
		printf("Digite a sua Nota : \n");
		scanf("%f",&nota[i]);		
	}
	for(i=0; i<5; i++)
	{
		cont=cont+1;
		soma=soma+nota[i];
		
		if(nota[i]>=7)
		{
			Cont=Cont+1;
		}
		else
		{
			Cont=Cont;
		}
	}
	printf(" Media das Notas: %.1f \n",soma/cont);	
	printf("Notas a Cima de 7 : %d \n",Cont);	
}
/* Implementar um algoritmo que leia 150 notas de provas e:
- calcule a média das notas;
- calcule quantas notas estão acima da média (Média de aprovação: 7,0) */


