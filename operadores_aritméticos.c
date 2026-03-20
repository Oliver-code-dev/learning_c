// operadores_aritméticos.c

// lembre sempre de comentar no seu código!

// Isso é um comentário
/* Isso é um comentário multi-linha */

#include <stdio.h> // Isso é uma diretiva de pré-processamento para incluir a biblioteca stdio.h para entrada e saída de dados

int main() { // Isso é uma definição de função main que é a função principal do programa

    // Soma
    int a = 10; // Isso é uma declaração de variável inteira que armazena o valor 10
    int b = 20;
    int c;
    c = a + b; // soma os valores de a e b e armazena o resultado em c
    printf("c = %d\n", c);

    // Subtração 
    int c = a - b; // subtrai o valor de b do valor de a e armazena o resultado em c
    printf("c = %d\n", c);

    // Multiplicação 
    int c = a * b; // multiplica o valor de a pelo valor de b e armazena o resultado em c
    printf("c = %d\n", c);

    // Divisão 
    int c = a / b; // divide o valor de a pelo valor de b e armazena o resultado em c
    printf("c = %d\n", c);

    // Módulo (resto da divisão)
    int c = a % b; // divide o valor de a pelo valor de b e armazena o resto em c
    printf("c = %d\n", c);

    // Incremento 
    int c = a++; // incrementa o valor de a em 1 e armazena o resultado em c
    printf("c = %d\n", c);

    // Decremento
    int c = a--; // decrementa o valor de a em 1 e armazena o resultado em c    
    printf("c = %d\n", c);

    return 0; // Isso é uma instrução de retorno para indicar que a função main terminou com sucesso
} // Isso é o fim da definição de função main