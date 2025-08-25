#include <stdio.h>
#include <math.h>
int main(){
	float X, Y, Z, W, b, F;

    printf("Introduce el valor de X: ");
    scanf("%f", &X);

    printf("Introduce el valor de Y: ");
    scanf("%f", &Y);

    printf("Introduce el valor de Z: ");
    scanf("%f", &Z);

    printf("Introduce el valor de W: ");
    scanf("%f", &W);

    printf("Introduce el valor de b: ");
    scanf("%f", &b);

    F = pow((4 * pow(X, 2) * pow(Y, 2) * sqrt(2 * Z * W)) / (4 * pow(X, 2)), 2) * (1 / pow(b, 3)) * pow(b, 4);

    printf("El valor de F es: %.2f \n", F);

    return 0;
}
