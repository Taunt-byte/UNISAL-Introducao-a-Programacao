/*Programa para somar dois números inteiros */

#include<stdio.h>

int main() /*Início */
{
	int num1, num2, soma; /* Declaração de variáveis */
	
	/*Entrada de dados */
	printf("Informe o primeiro numero...:");
	scanf("%d",&num1);
	printf("Informe o segundo numero....:");
	scanf("%d",&num2);
	
	/*Processamento da soma */
	soma = num1 + num2;
	
	/*Saída de dados - Resultado */
	printf("\nSoma = %d",soma);
	
	return(0);
} /*Fim */