#include <stdio.h>
#include <math.h>
int main(){
float a, b, Y, Z, W;

    printf("Introduce el valor de A: ");
    scanf("%f", &a);

    printf("Introduce el valor de B: ");
    scanf("%f", &b);

    Y = 3 * pow(a, 2) * b * sqrt(2 * a / a);
    W = sqrt(2 * a) * (3 * pow(a, 2) * b * sqrt(2 * a / a));
    Z = Y / W;

    printf("El valor de Y es: %.2f\n", Y);
    printf("El valor de W es: %.2f\n", W);
    printf("El valor de Z es: %.2f\n", Z);

    return 0;
}
