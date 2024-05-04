#include<stdio.h>

int main()
{
	int i = 1;
	int num;
	
	while(i <= 5)
	{
		printf("\nInforme um valor inteiro:");
		scanf("%d",&num);
		if(num == 10)
		{
			printf("\nNumero = 10");
		}
		i++;
	}
	return(0);
}

