
#include <stdio.h>

// Função para ajustar o heap (heapify)
void heapify(int arr[], int n, int i) {
    int largest = i;        // Inicializa o maior como raiz
    int left = 2 * i + 1;   // Filho esquerdo
    int right = 2 * i + 2;  // Filho direito

    // Se o filho esquerdo for maior que a raiz
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Se o filho direito for maior que o maior atual
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Se o maior não for a raiz
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Ajusta o heap recursivamente
        heapify(arr, n, largest);
    }
}

// Função principal do HeapSort
void heapSort(int arr[], int n) {
    // Constrói o max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extrai elementos do heap um por um
    for (int i = n - 1; i >= 0; i--) {
        // Move a raiz atual para o fim
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Ajusta o heap reduzido
        heapify(arr, i, 0);
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}
