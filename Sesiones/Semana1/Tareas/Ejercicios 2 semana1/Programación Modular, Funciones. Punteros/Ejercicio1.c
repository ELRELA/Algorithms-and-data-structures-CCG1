#include <stdio.h>


int factorial(int n) {
    int fact = 1,i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


double funcion(int x, int y) {
    long factX = factorial(x);
    long factY = factorial(y);
    long factXY = factorial(x - y);
    
    return  factX / (factY * factXY);
}

int main() {
    int x, y;
    
 
    printf("Ingrese el valor de X: ");
    scanf("%d", &x);
    printf("Ingrese el valor de Y: ");
    scanf("%d", &y);
    
    
    if (x < y) {
        printf("Error: X debe ser mayor o igual que Y\n");
    }
    else{
   
    double resultado = funcion(x, y);
    printf("El resultado de la funcion f es: %.2f\n", resultado);
    	}
    return 0;
}

