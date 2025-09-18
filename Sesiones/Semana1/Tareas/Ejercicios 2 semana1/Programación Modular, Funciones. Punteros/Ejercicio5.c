#include <stdio.h>

float elevarPotencia(float base, int exponente){
    float resultado = 1;
    int i;
    for(i = 0; i < exponente; i++){
        resultado *= base;
    }
    return resultado;
}

int main(){
    float base, resultado;
    int exponente;
    printf("Introduce la base: ");
    scanf("%f", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);

    resultado = elevarPotencia(base, exponente);

    printf("El resultado de %.2f elevado a la potencia %d es: %.2f\n", base, exponente, resultado);

    return 0;
}
