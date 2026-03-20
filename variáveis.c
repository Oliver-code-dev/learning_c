// variáveis.c

// lembre sempre de comentar no seu código!

// Isso é um comentário
/* Isso é um comentário multi-linha */

#include <stdio.h>

int main() {

    // imagine a variável como uma caixa vazia, essa caixa vazia pode ser caracteres(letras/simbolos); números reais(float), números inteiros(int) ou strings(Lista de letras que forma uma ou mais palavras)
    
    int idade = 20; // declaração de variável inteira com valor 20
    float altura = 1.75; // declaração de variável float com valor 1.75
    char nome[50] = "João"; // declaração de variável string é uma lista de caracteres com 50 caracteres
    char sexo = 'M'; // declaração de variável char com valor 'M'

// a variavel sexo é um caractere, por isso é declarado como char e não como string
// a variavel nome é uma string é uma lista de caracteres, por isso é declarado como char[50] e o valor é "João"
// a variavel idade é uma variável inteira, por isso é declarado como int e o valor é 20
// a variavel altura é uma variável float, por isso é declarado como float e o valor é 1.75

// imprime as variáveis usando o printf
    printf("Variáveis:\n"); // imprime o título
    printf("Nome: %s\n", nome); // O simbolo %s é um placeholder para string
    printf("Idade: %d\n", idade); // O simbolo %d é um placeholder para inteiro
    printf("Altura: %f\n", altura); // O simbolo %f é um placeholder para float
    printf("Sexo: %c\n", sexo); // O simbolo %c é um placeholder para char

// printf é uma função que imprime o que está entre as aspas, EX: printf("Variáveis:"); vai imprimir "Variáveis:" na tela

    return 0;
}
