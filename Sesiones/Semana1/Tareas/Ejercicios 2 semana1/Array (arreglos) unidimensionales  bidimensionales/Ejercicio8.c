#include <stdio.h>

#define MAX 10

void cargarMatriz(int matriz[][MAX], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[][MAX], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void realizarDiferencia(int A[][MAX], int B[][MAX], int C[][MAX], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mostrarMenu() {
    printf("\nMENU\n");
    printf("1. Cargar y realizar la diferencia de dos matrices del mismo orden A - B\n");
    printf("2. Salir\n");
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], m, n, opcion;

    do {
        mostrarMenu();
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa las dimensiones de las matrices (m x n): ");
                scanf("%d %d", &m, &n);

                if (m <= 0 || n <= 0 || m > MAX || n > MAX) {
                    printf("Dimensiones no validas. El tamaño maximo es %dx%d.\n", MAX, MAX);
                    break;
                }

                printf("Cargar matriz A:\n");
                cargarMatriz(A, m, n);
                
                printf("Cargar matriz B:\n");
                cargarMatriz(B, m, n);

                realizarDiferencia(A, B, C, m, n);

                printf("\nMatriz A:\n");
                mostrarMatriz(A, m, n);

                printf("\nMatriz B:\n");
                mostrarMatriz(B, m, n);

                printf("\nResultado de la diferencia A - B:\n");
                mostrarMatriz(C, m, n);
                break;

            case 2:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida. Intenta nuevamente.\n");
        }
    } while (opcion != 2);

    return 0;
}

