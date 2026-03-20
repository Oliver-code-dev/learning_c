// ordem_precedencia.c

// lembre sempre de comentar no seu código!

// Isso é um comentário
/* Isso é um comentário multi-linha */

#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;
    int c = a + b * 2;

// a ordem de precedência é: multiplicação, divisão, adição, subtração
// a multiplicação é feita primeiro, depois a adição
// c = a + b * 2; é igual a c = 10 + 20 * 2; é igual a c = 10 + 40; é igual a c = 50;

// para alterar a ordem de precedência, podemos usar parênteses
// c = (a + b) * 2; é igual a c = 30 * 2; é igual a c = 60;

    printf("A multiplicação de a e b é: %d\n", c);

// printf é uma função que imprime o que está entre as aspas, EX: printf("A multiplicação de a e b é: %d\n", c); vai imprimir "A multiplicação de a e b é: 40" na tela
// %d é um placeholder para inteiro

    return 0;
}