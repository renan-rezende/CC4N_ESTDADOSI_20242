#include <stdio.h>

// Função que implementa o algoritmo de Selection Sort
void selectionSort(int arr[], int n) {
    // Loop para percorrer cada elemento do array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Define o índice do menor elemento como o índice atual

        // Loop para encontrar o menor elemento no subarray não ordenado
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Atualiza minIndex se um elemento menor é encontrado
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento do subarray não ordenado
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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
    int arr1[50] = {
    45, 23, 87, 12, 94, 32, 68, 76, 19, 59,
    41, 84, 28, 66, 11, 73, 99, 5, 34, 92,
    17, 49, 27, 90, 56, 7, 81, 37, 65, 2,
    88, 25, 77, 13, 53, 10, 69, 97, 3, 35,
    82, 22, 48, 75, 29, 64, 15, 58, 95, 1
};

    int n = sizeof(arr) / sizeof(arr[0]); // Calcula o número de elementos no array

    // Exibe o array antes da ordenação
    printf("Array original: \n");
    printArray(arr, n);

    // Chama a função selectionSort para ordenar o array
    selectionSort(arr, n);

    // Exibe o array após a ordenação
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

