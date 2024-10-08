#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

// Função para somar os elementos de um array
int somaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int numero = 5;
    int resultadoFatorial = fatorial(numero);
    printf("Fatorial de %d é %d\n", numero, resultadoFatorial);

    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int resultadoSoma = somaArray(array, tamanho);
    printf("Soma dos elementos do array é %d\n", resultadoSoma);

    return 0;
}