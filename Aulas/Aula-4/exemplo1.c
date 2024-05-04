#include <stdio.h>

int main() {
    // Declaração das variáveis para os números e a opção
    float n1, n2;
    int opcao;

    // Solicita ao usuário que insira os dois números
    printf("Informe n1:");
    scanf("%f", &n1);
    printf("Informe n2:");
    scanf("%f", &n2);

    // Apresenta um menu de opções para o usuário
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");
    printf("\nEscolha a opcao desejada:");

    // Lê a opção escolhida pelo usuário
    scanf("%d", &opcao);

    // Realiza a operação de acordo com a opção escolhida
    switch (opcao) {
        case 1:
            printf("\nSoma = %.2f", n1 + n2);
            break;
        case 2:
            printf("\nSubtracao = %.2f", n1 - n2);
            break;
        case 3:
            printf("\nMultiplicacao = %.2f", n1 * n2);
            break;
        case 4:
            // Verifica se o segundo número é zero para evitar divisão por zero
            if (n2 != 0) {
                printf("\nDivisao = %.2f", n1 / n2);
            } else {
                printf("\nErro: Divisao por zero!");
            }
            break;
        default:
            printf("\nOpcao invalida!!!");
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
