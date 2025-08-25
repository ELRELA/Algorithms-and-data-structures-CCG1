#include <stdio.h>

int main() {
    int N, suma = 0, i;

    printf("Ingrese un numero par: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Error: El numero debe ser mayor o igual a 2\n");
    } else {
        for (i = 2; i <= N; i += 2) {
            suma += i;
        }
        printf("La suma de los numeros pares hasta %d es: %d\n", N, suma);
    }

    return 0;
}

