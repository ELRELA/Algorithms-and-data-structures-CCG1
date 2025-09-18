#include <stdio.h>
#include <math.h>

double calcularSumatoria(){
    double suma = 0;
    for(int i = 2; i <= 1500; i += 2){
        suma += sqrt(i);
    }
    return suma;
}

int main(){
    double resultado = calcularSumatoria();
    printf("La sumatoria de las raices cuadradas de los numeros pares desde 2 hasta 1500 es: %.2f\n", resultado);
    return 0;
}

