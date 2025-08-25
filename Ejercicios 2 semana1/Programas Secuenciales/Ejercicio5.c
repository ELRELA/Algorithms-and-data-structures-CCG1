#include <stdio.h>
int main(){
	
float longitud, anchura, costoMetroCuadrado, area, costoTotal;

    printf("Introduce la longitud del terreno en metros: ");
    scanf("%f", &longitud);

    printf("Introduce la anchura del terreno en metros: ");
    scanf("%f", &anchura);

    printf("Introduce el costo por metro cuadrado: ");
    scanf("%f", &costoMetroCuadrado);

    area = longitud * anchura;
    costoTotal = area * costoMetroCuadrado;

    printf("El area del terreno es: %.2f metros cuadrados\n", area);
    printf("El costo total del terreno es: %.2f\n", costoTotal);

    return 0;
}
