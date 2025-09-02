#include <stdio.h>
#include <math.h>
int main(){
	float radianes, tangente, cotangente, secante, cosecante;

    printf("Introduce el tamano del angulo en radianes: ");
    scanf("%f", &radianes);

    tangente = tan(radianes);
    cotangente = 1 / tangente;
    secante = 1 / cos(radianes);
    cosecante = 1 / sin(radianes);

    printf("La tangente es: %.4f\n", tangente);
    printf("La cotangente es: %.4f\n", cotangente);
    printf("La secante es: %.4f\n", secante);
    printf("La cosecante es: %.4f\n", cosecante);

    return 0;
}
