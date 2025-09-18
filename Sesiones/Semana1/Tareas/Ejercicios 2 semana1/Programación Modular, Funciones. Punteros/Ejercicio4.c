#include <stdio.h>

void leerNumeros(int *a, int *b, int *c){
    printf("Introduce el primer numero: ");
    scanf("%d", a);
    printf("Introduce el segundo numero: ");
    scanf("%d", b);
    printf("Introduce el tercer numero: ");
    scanf("%d", c);
}

int obtenerMayor(int a, int b, int c){
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

void imprimirMayor(int mayor){
    printf("El numero mayor es: %d\n", mayor);
}

int main(){
    int num1, num2, num3, mayor;
    leerNumeros(&num1, &num2, &num3);
    mayor = obtenerMayor(num1, num2, num3);
    imprimirMayor(mayor);
    return 0;
}

