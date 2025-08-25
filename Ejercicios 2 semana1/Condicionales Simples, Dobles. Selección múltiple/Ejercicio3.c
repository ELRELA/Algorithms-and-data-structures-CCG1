#include <stdio.h>

int main() {
    float A, B, C;
    
    printf("Ingrese el valor del primer angulo A: ");
    scanf("%f", &A);
    
    printf("Ingrese el valor del segundo angulo B: ");
    scanf("%f", &B);
    
    printf("Ingrese el valor del tercer angulo C: ");
    scanf("%f", &C);
    
    
        if (A == 90 || B == 90 || C == 90) {
            printf("El triangulo es rectangulo.\n");
        } else if (A > 90 || B > 90 || C > 90) {
            printf("El triangulo es obtusangulo.\n");
        } else {
            printf("El triangulo es acutangulo.\n");
        }
    
    
    return 0;
}
