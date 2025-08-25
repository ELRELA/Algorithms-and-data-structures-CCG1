#include <stdio.h>

int main() {
    float X, Y;
    
    printf("Ingrese el valor de X: ");
    scanf("%f", &X);
    
    if (X < 0) {
        Y = 3 * X + 6;
    } else {
        Y = X * X + 6;
    }
    
    printf("El valor de X es: %.2f\n", X);
    printf("El valor de Y es: %.2f\n", Y);
    
    return 0;
}
