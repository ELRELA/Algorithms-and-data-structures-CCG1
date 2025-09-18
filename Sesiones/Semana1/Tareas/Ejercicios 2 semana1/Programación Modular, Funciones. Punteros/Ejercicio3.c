#include <stdio.h>

void intercambiar(float *a, float *b){
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    float num1, num2;
    printf("Introduce el primer numero: ");
    scanf("%f", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%f", &num2);

    intercambiar(&num1, &num2);

    printf("El primer numero es: %.2f\n", num1);
    printf("El segundo numero es: %.2f\n", num2);

    return 0;
}

