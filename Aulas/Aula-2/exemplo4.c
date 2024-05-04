#include<stdio.h>

int main()
{
	float vetor[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Informe um valor real: ");
		scanf("%f",&vetor[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%f  ",vetor[i]);
	}
	return(0);
}

