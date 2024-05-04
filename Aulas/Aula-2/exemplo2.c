#include<stdio.h>

int main()
{
	int vetor[5],i;
	 
	i = 0;
	
	while(i<5)
	{
		printf("Informe um valor inteiro: ");
		scanf("%d",&vetor[i]);
		i++;
	}
	
    i = 0;
	
	while(i<5)
	{
		printf("%d ",vetor[i]);
		i++;
	}
	return(0);
}
