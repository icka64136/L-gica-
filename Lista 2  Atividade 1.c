#include<stdio.h>
main()
{
	int vet[5],i,pos=-1,maior=0;
	
	for(i=0; i<5; i++)
	{
		printf("Digite um Valor \n");
		scanf("%d",&vet[i]);		
	}
	for(i=0; i<5; i++)
	{
		if(vet[i]>maior)
		{
			maior=vet[i];
			pos=i; // Este I vai Armazenar a Posi��o do Vetor e o Maior vai Armazenar o Numero Maior!
		}
		else
		{
			maior=maior;
			pos=pos;
		}
	}
	printf("O Valor %d esta na Posicao %d \n",maior,pos);	
}

/*Dada uma seq��ncia num�rica de 20 elementos armazenados num vetor,
determinar o �ndice (posi��o) do maior elemento do conjunto. Suponha que os
elementos sejam distintos.*/
