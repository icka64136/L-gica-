#include<stdio.h>
main()
{
	int m1[2][2],l1,c1;
	int m2[2][2],l2,c2;
	int ms[2][2],ls,cs;
	
	for(l1=0; l1<2; l1++)
	{
		for(c1=0; c1<2; c1++)
		{
			printf("Digite um Valor Matriz 1 : \n");
			scanf("%d",&m1[l1][c1]);
		}
	}
	
	for(l2=0; l2<2; l2++)
	{
		for(c2=0; c2<2; c2++)
		{
			printf("Digite um Valor Matriz 2 : \n");
			scanf("%d",&m2[l2][c2]);
		}
	}
	
	for(ls=0; ls<2; ls++)
	{
		for(cs=0; cs<2; cs++)
		{
			ms[ls][cs]=m1[ls][cs]+m2[ls][cs];
			printf("Matriz 3 : %d \n ",ms[ls][cs]);	
		}
	}
	for(ls=0; ls<2; ls++)
	{ 	
		for(cs=0; cs<2; cs++)
		{		
			if(ms[ls][cs]%2==0)
			{
				printf("Matriz 3 : %d Par \n ",ms[ls][cs]);
			}
			else
			{
				printf("Matriz 3 : %d impar \n ",ms[ls][cs]);
			}
		}
	}
}
	


/* Elabore um algoritimo que leia 2 matrizes bidimensionais (4,4). Adicione valores a
essas matrizes. Some as duas matrizes e adicione em outra matriz. Imprima a
matriz com o resultado. */
