#include<stdio.h>
main()
{
	int linha;
	int coluna;
	int x[2][2];
	
	for(linha=0; linha<2; linha++)
	{
		for(coluna=0; coluna<2; coluna++)
		{
			printf("Digite um Valor : \n");
			scanf("%d",&x[linha][coluna]);
		}
	}
		for(linha=0; linha<2; linha++)
	{
		for(coluna=0; coluna<2; coluna++)
		{
			printf("Valor: %d, Linha: %d x Coluna: %d \n", x[linha][coluna], linha,coluna);
			
		}
	}
	
}
