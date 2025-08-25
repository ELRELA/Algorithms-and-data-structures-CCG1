#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y, discriminante;

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    
    printf("Ingrese el valor de d: ");
    scanf("%f", &d);
    
    printf("Ingrese el valor de e: ");
    scanf("%f", &e);
    
    printf("Ingrese el valor de f: ");
    scanf("%f", &f);

    discriminante = a * e - b * d;

    if (discriminante != 0) {
        x = (c * e - b * f) / discriminante;
        y = (a * f - c * d) / discriminante;
        printf("El valor de x es: %.2f\n", x);
        printf("El valor de y es: %.2f\n", y);
    } else {
        printf("El sistema no tiene solucion.\n");
    }

    return 0;
}

