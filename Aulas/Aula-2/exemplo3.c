#include<stdio.h>

int main()
{
	int vetor[5],i,x=0;
	
	for(i=0;i<5;i++)
	{
		printf("Informe um valor inteiro: ");
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<5;i++)
	{
		x += vetor[i]; /* x = x + vetor[i]  */
	}
	printf("Soma dos valores do vetor = %d",x);
	return(0);
}
