# Introdução à Programação

Este repositório contém códigos e conceitos apresentados na disciplina de Introdução à Programação da UNISAL. 

Durante o curso, aprendi diversos aspectos fundamentais da programação, desde a estrutura básica de um código até conceitos mais avançados, como manipulação de matrizes e interação com o terminal. 

Abaixo estão alguns dos tópicos abordados:

## Estrutura Básica de um Código em C

No início do curso, aprendemos a estrutura básica de um programa em C. Isso inclui a declaração de bibliotecas, a função principal `main()` e a sintaxe básica para imprimir mensagens na tela e interagir com o usuário.

Exemplo:
```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}
```

## Fundamentos de Programação em C

Exploramos os fundamentos da linguagem C, incluindo variáveis, tipos de dados, operadores aritméticos e lógicos, estruturas condicionais (`if`, `else if`, `else`) e estruturas de repetição (`for`, `while`, `do-while`).

Exemplo:
```c
#include <stdio.h>

int main() {
    int idade = 20;
    float altura = 1.75;
    char inicial = 'J';

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial do nome: %c\n", inicial);

    return 0;
}
```

## Manipulação de Matrizes

Uma parte importante do curso foi dedicada à manipulação de matrizes em C. Aprendemos como declarar matrizes, inicializá-las, acessar seus elementos e realizar operações básicas, como soma, multiplicação e transposição.

Exemplo:
```c
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## Repetições com Laços

Utilizamos diversos tipos de laços para criar repetições em nossos programas. O `for`, `while` e `do-while` foram abordados, mostrando suas aplicações em situações diversas, desde iteração sobre elementos de uma matriz até repetições controladas por condições específicas.

Exemplo:
```c
#include <stdio.h>

int main() {
    printf("Contagem regressiva:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
```

## Estrutura de Seleção com Switch Case

Além das estruturas condicionais tradicionais, exploramos a estrutura `switch case`, que permite avaliar uma expressão e executar diferentes blocos de código com base no valor dessa expressão.

Exemplo:
```c
#include <stdio.h>

int main() {
    int opcao;
    printf("Escolha uma opção (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
```
