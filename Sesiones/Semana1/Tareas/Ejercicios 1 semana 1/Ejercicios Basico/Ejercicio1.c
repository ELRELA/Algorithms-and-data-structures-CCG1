#include<stdio.h>
#include <math.h> 

int main(){

    float a,b,c;

    printf("Ax^2 + Bx + C =0 \n");
   
    printf("ingrese: A \n");
    scanf("%f",&a);
    printf("ingrese: B \n");
    scanf("%f",&b);
    printf("ingrese: C \n");    
    scanf("%f",&c);

    
    float discri=(b * b) - (4 * a * c);
    
   
    if (discri < 0) {
        printf("Las raices no son reales (discriminante negativo).\n");
    } else {
        
        float raiz1 = (-b + sqrt(discri)) / (2 * a);
        float raiz2 = (-b - sqrt(discri)) / (2 * a);
    
    printf("el valor de la raiz 1 de la funcion cuadratica es: %f",raiz1);
    printf("el valor de la raiz 2 de la funcion cuadratica es: %f",raiz2);
    }
    return 0;
}


