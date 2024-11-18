#include <stdio.h>

void shellSort(int arr[], int n) {
    // Inicializa o intervalo (gap)
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Realiza o Insertion Sort considerando o intervalo (gap)
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            
            // Move os elementos que estão fora de ordem
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            
            // Coloca o elemento temporário na posição correta
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    shellSort(arr, n);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}

