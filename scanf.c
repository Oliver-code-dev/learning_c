// scanf.c

#include <stdio.h>

int main() {
    // Declaramos a "caixa" (variável) que vai guardar o número.
    // O tipo 'int' avisa que só cabem números inteiros aqui.
    int numero;

    // printf: Saída de dados. Exibe uma mensagem na tela para o usuário.
    printf("Digite um numero inteiro: ");

    // scanf: Entrada de dados. 
    // O "%d" diz: "O usuário precisa digitar um número inteiro".
    // O "&numero" diz: "Leve esse número até o endereço de memória da variável 'numero'".
    scanf("%d", &numero);

    // 4. Mostramos o resultado para confirmar que o computador entendeu.
    printf("Voce digitou o valor: %d\n", numero);

    return 0;
}