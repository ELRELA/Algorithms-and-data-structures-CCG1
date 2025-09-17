#include <stdio.h>

void ordenar(int vector[], int n) {
    int i, j, temp;
    //utilizamos el metodo de burbuja para ordenar, aunque esto tambien es poco eficiente dado que es complejidad O(n^2)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    printf("Ingresa el tamaño del vector: ");
    scanf("%d", &n);
    
    int vector[n];
    
    printf("Ingresa los elementos del vector:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    ordenar(vector, n);
    
    printf("\nVector ordenado de menor a mayor:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", vector[i]);
    }
    printf("\n");
    
    return 0;
}
