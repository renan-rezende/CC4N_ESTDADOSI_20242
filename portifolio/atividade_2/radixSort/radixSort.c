#include <stdio.h>

// Função para encontrar o maior valor no array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Função para fazer a contagem e ordenação por dígitos
void countingSort(int arr[], int n, int exp) {
    int output[n]; // Array para armazenar a saída
    int count[10] = {0};

    // Contagem da frequência dos dígitos
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Ajusta o count para refletir a posição dos dígitos
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Constrói o array de saída
    for (int i = n - 1; i >= 0; i--) {
        int index = (arr[i] / exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    // Copia o array de saída para o array original
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Função principal do RadixSort
void radixSort(int arr[], int n) {
    // Encontra o maior número para saber o número de dígitos
    int max = getMax(arr, n);

    // Faz a contagem e ordenação para cada dígito
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    radixSort(arr, n);

    printf("Array ordenado:\n");
    printArray(arr, n);

    return 0;
}

