#include <stdio.h>
#include <math.h>
int main(){
	float r, volumen, area;
    float pi = 3.141592653589793;

    printf("Introduce el radio de la esfera: ");
    scanf("%f", &r);

    volumen = (4/3) * pi * pow(r, 3);
    area = 4 * pi * pow(r, 2);

    printf("El volumen de la esfera es: %.2f \n", volumen);
    printf("El area de la esfera es: %.2f \n", area);

    return 0;
}
