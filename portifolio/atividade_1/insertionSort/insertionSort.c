#include <stdio.h>

// Função que implementa o algoritmo de Insertion Sort
void insertionSort(int arr[], int n) {
    // Percorre o array a partir do segundo elemento
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Armazena o elemento atual em 'key'
        int j = i - 1;

        // Move elementos do array que são maiores que 'key' para uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Insere 'key' na posição correta
        arr[j + 1] = key;
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Imprime cada elemento do array
    }
    printf("\n"); // Nova linha ao final da impressão
}

int main() {
    // Define o array de elementos a serem ordenados
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o número de elementos no array

    // Exibe o array antes da ordenação
    printf("Array original: \n");
    printArray(arr, n);

    // Chama a função insertionSort para ordenar o array
    insertionSort(arr, n);

    // Exibe o array após a ordenação
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

