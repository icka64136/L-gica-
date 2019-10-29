#include<stdio.h>
main()
{
	int n [4],i;
		
	for(i=0; i<4; i++)
	{
		printf("Entre com um Valor : \n");
		scanf("%d",&n[i]);
	}
	for(i=0; i<4; i++)
	{
		printf("%d\t",n[i]);
	}	
}
