#include<stdio.h>

int main()
{
	int op;
	do
	{
		printf("\n1 - Opcao 1");
		printf("\n2 - Opcao 2");
		printf("\n3 - Opcao 3");
		printf("\n4 - Sair");
		printf("\nEscolha a opcao: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			    printf("\nOpcao 1 escolhida");
			    break;
			case 2:
				printf("\nOpcao 2 escolhida");
				break;
			case 3:
				printf("\nOpcao 3 escolhida");
				break;
		}
	}while(op >= 1 && op < 4);
	return(0);
}
