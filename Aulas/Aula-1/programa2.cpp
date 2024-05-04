/*Programa para calcular a média aritmética de 3 números reais */

#include<stdio.h>

int main() /*Início */
{
	float num1, num2, num3, media; /* Declaração de variáveis */
	
	/*Entrada de dados */
	printf("Informe o primeiro numero....:");
	scanf("%f",&num1);
	printf("Informe o segundo numero.....:");
	scanf("%f",&num2);
	printf("Informe o terceiro numero....:");
	scanf("%f",&num3);
	
	/*Processamento da média */
	media = (num1 + num2 + num3)/3;
	
	/*Saída de dados - Resultado */
	printf("\nMedia = %f",media);
	
	return(0);
} /*Fim */