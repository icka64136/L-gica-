#include<stdio.h>
main()
{
	int i;
	float media[200],maior=0;
	
	for(i=0; i<200; i++)
	{
		printf("Digite a sua Media : \n");
		scanf("%f",&media[i]);		
	}
	for(i=0; i<200; i++)
	{
		if(maior>media[i])
		{
			maior=maior;
		}
		else
		{
			maior=media[i];
		}
	}
	printf("Aluno Campeao com a Maior Media : %.1f \n",maior);	
}
/* Uma escola com 200 alunos est� realizando um competi��o que premiar� o aluno que 
obtiver a maior m�dia final em todas as disciplinas. Elabore um algoritmo que guarde a 
m�dia final de todos os alunos e mostre a m�dia do aluno campe�o. */


