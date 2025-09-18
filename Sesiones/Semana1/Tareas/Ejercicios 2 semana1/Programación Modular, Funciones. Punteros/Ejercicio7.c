#include <stdio.h>

void calcularSumatoria(int N, int *resultado){
	int i;
    *resultado = 0;
    for(i = 2; i < N; i++){
        *resultado += i * i;
    }
}

int main(){
    int N, sumatoria;
    printf("Introduce el valor de N: ");
    scanf("%d", &N);

    calcularSumatoria(N, &sumatoria);

    printf("La sumatoria de los cuadrados de los enteros entre 1 y %d es: %d\n", N, sumatoria);

    return 0;
}

