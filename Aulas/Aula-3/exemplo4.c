#include<stdio.h>

int main()
{
	float a,b,c;
	
	printf("Informe o numerador....:");
	scanf("%f",&a);
	printf("Informe o denominador..:");
	scanf("%f",&b);
	while(b == 0)
	{
	  printf("Informe o denominador..:");
	  scanf("%f",&b);		
	}
	c = a/b;
	printf("\nResultado = %f",c);
	return(0);
}

