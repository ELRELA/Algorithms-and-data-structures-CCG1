#include <stdio.h>
#include <math.h>
int main(){
	float w, Z;
    float pi = 3.141592653589793;

    printf("Introduce el valor de w: ");
    scanf("%f", &w);

    Z = (1 / sqrt(2 * pi))* (exp((-1*pow(w, 2)) / 2));

    printf("El valor de Z es: %.4f \n", Z);

    return 0;
}
