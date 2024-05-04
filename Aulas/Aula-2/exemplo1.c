#include<stdio.h>

int main()
{
	int vetor[5], i;
	
	for(i=0;i<5;i++)
	{
		printf("Informe um valor inteiro: ");
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d  ", vetor[i]);
	}
	return(0);
}
