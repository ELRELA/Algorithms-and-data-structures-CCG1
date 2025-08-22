#include<stdio.h>
#include <math.h> 

int main(){

    float a,b,c;

    printf("Ax^2 + Bx + C =0");
    //introduciendo los valores de A,B,C
    printf("ingrese: A \n");
    scanf("%f",&a);
    printf("ingrese: B \n");
    scanf("%f",&b);
    printf("ingrese: C \n");    
    scanf("%f",&c);

    //Hallando la Discriminante
    float discri=(b * b) - (4 * a * c);
    //Hallando las raices
    // Primero Comprobamos si el discriminante es negativo
    if (discri < 0) {
        printf("Las raices no son reales (discriminante negativo).\n");
    } else {
        // Hallando las raíces
        float raiz1 = (-b + sqrt(discri)) / (2 * a);
        float raiz2 = (-b - sqrt(discri)) / (2 * a);
    //Imprimiendo 
    printf("el valor de la raiz 1 de la funcion cuadratica es: %f",raiz1);
    printf("el valor de la raiz 2 de la funcion cuadratica es: %f",raiz2);
    }
    return 0;
}


