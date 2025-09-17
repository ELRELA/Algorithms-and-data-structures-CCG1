#include <stdio.h>

#define TAM 10

void calcularFactorial() {
    int n, i;
    int factorial = 1;
    
    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es %d \n", n, factorial);
    }
}

void cargarYOrdenar(int vector[]) {
    int i, j, temp;
    
    printf("Ingresa los 10 elementos del vector:\n");
    for (i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    for (i = 0; i < TAM - 1; i++) {
        for (j = i + 1; j < TAM; j++) {
            if (vector[i] < vector[j]) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
    
    printf("Vector ordenado en orden descendente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vector[i]);
    }
    printf("\n");
}

void mostrarMenu() {
    printf("\nMENU\n");
    printf("1. Factorial de un numero entero positivo\n");
    printf("2. Cargar y ordenar en orden descendente un vector de diez elementos\n");
    printf("3. Salir\n");
}

int main() {
    int opcion, vector[TAM];
    
    do {
        mostrarMenu();
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                calcularFactorial();
                break;
            case 2:
                cargarYOrdenar(vector);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Intenta nuevamente.\n");
        }
    } while (opcion != 3);
    
    return 0;
}
