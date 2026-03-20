// operadores_relacionais.c

// lembre sempre de comentar no seu código!

// Isso é um comentário
/* Isso é um comentário multi-linha */

#include <stdio.h>

int main() {
    int a = 10; //declaramos a variável a com o valor 10
    int b = 20; //declaramos a variável b com o valor 20

    // vamos verificar se a é maior que b usando o operador relacional > (maior que)

    // if é uma estrutura de controle que verifica se a condição é verdadeira ou falsa
    // se a condição for verdadeira, o bloco de código dentro do if é executado; if se lê como "se"
    // se a condição for falsa, o bloco de código dentro do else é executado; else se lê como "senão"
    if (a > b) {
        printf("a é maior que b\n");
    } else { // se a condição for falsa, o bloco de código dentro do else é executado
        printf("a é menor que b\n");
    }

    // alguns outros operadores relacionais são:
    // == (igual)
    // != (diferente)
    // >= (maior ou igual)
    // <= (menor ou igual)
    // > (maior que)
    // < (menor que)

    // para usar outros operadores relacionais, basta substituir o operador relacional na condição
    // EX: if (a == b) { printf("a é igual a b\n"); } else { printf("a é diferente de b\n"); }
    // EX: if (a != b) { printf("a é diferente de b\n"); } else { printf("a é igual a b\n"); }
    // EX: if (a >= b) { printf("a é maior ou igual a b\n"); } else { printf("a é menor que b\n"); }
    // EX: if (a <= b) { printf("a é menor ou igual a b\n"); } else { printf("a é maior que b\n"); }
    // EX: if (a > b) { printf("a é maior que b\n"); } else { printf("a é menor ou igual a b\n"); }
    // EX: if (a < b) { printf("a é menor que b\n"); } else { printf("a é maior ou igual a b\n"); }

    return 0;
}