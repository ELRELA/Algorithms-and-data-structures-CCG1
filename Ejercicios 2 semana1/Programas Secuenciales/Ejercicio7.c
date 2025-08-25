#include <stdio.h>
int main(){
	float tiempo, distancia;
    float velocidadLuz = 300000; 

    printf("Introduce el tiempo en segundos: ");
    scanf("%f", &tiempo);

    distancia = velocidadLuz * tiempo;

    printf("La distancia recorrida por la luz en %f segundos es: %.2f kilometros\n", tiempo, distancia);

    return 0;
}
