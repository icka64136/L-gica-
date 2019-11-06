#include<stdio.h>
main()
{
	int l,c,i[2][2];
	
	for(l=0; l<2; l++)
	{
		for(c=0; c<2; c++)
		{
			printf("Digite um Valor : \n");
			scanf("%d",&i[l][c]);
		}
	}
		
	printf("Valor Linha 0, Coluna 0 : %d \n",i[0][0]);
	printf("Valor Linha 0, Coluna 1 : %d \n",i[0][1]);
	printf("Valor Linha 1, Coluna 0 : %d \n",i[1][0]);
	printf("Valor Linha 1, Coluna 1 : %d \n",i[1][1]);	
}
/* Elabore um algoritimo que leia 2 matrizes bidimensionais (2,2). Adicione valores a
essas matrizes e depois imprima na tela os valores de cada uma. */
