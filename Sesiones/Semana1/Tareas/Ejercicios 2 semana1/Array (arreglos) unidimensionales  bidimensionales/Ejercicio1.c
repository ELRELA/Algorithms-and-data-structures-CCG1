#include <stdio.h>

int main() {
    int numeros[20];
    int suma = 0;
    float media;

    printf("Ingrese 20 numeros enteros:\n");

    for(int i = 0; i < 20; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    media = suma / 20.0;

    printf("\nLa suma de los numeros es: %d\n", suma);
    printf("La media aritmetica es: %.2f\n", media);

    return 0;
}

