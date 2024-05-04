#include<stdio.h>
#define MAX 5
int main()
{
	int vetor[MAX], i;
	
	for(i=0;i<MAX;i++)
	{
		printf("Informe um valor inteiro: ");
		scanf("%d",&vetor[i]);
	}
	for(i=MAX-1;i>=0;i--)
	{
		printf("%d  ",vetor[i]);
	}
	
	return(0);
}
