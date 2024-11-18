#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para particionar o array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Escolhe o último elemento como pivô
    int i = (low - 1);     // Índice do menor elemento

    for (int j = low; j < high; j++) {
        // Se o elemento atual for menor que o pivô
        if (arr[j] < pivot) {
            i++; // Incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    // Coloca o pivô na posição correta
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Função principal do QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encontra o índice de particionamento
        int pi = partition(arr, low, high);

        // Ordena recursivamente as duas subpartes
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}

