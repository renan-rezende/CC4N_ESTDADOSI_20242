#include <stdio.h>

// Função que implementa o algoritmo de Bubble Sort
void bubbleSort(int arr[], int n) {
    // Loop externo para repetir o processo de ordenação
    for (int i = 0; i < n - 1; i++) {
        // Loop interno para comparar e trocar elementos adjacentes
        for (int j = 0; j < n - i - 1; j++) {
            // Se o elemento atual é maior que o próximo, troca eles de posição
            if (arr[j] > arr[j + 1]) {
                // Troca arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr3[50] = {
    99, 13, 45, 74, 22, 85, 31, 62, 17, 90,
    33, 52, 28, 83, 6, 79, 44, 58, 97, 1,
    41, 19, 73, 50, 26, 87, 5, 68, 14, 39,
    93, 10, 81, 20, 65, 4, 71, 29, 88, 3,
    55, 46, 92, 24, 18, 53, 34, 77, 12, 61
};

    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o número de elementos no array

    // Exibe o array antes da ordenação
    printf("Array original: \n");
    printArray(arr, n);

    // Chama a função bubbleSort para ordenar o array
    bubbleSort(arr, n);

    // Exibe o array após a ordenação
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
