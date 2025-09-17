#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int n, i;
    float m = 0, dm = 0, dt = 0;
    
    printf("Ingresa el tamano del vector: ");
    scanf("%d", &n);
    
    float arreglo[n];
    
    srand(time(0)); // este inicializa nuestro generador de numeros aleatorios.
    
    for (i = 0; i < n; i++) {
        arreglo[i] = rand() % 100 + 1;
        m += arreglo[i]; //Aca se suma desde i=0 hasta i-1 
    }
    m /= n;
    
    for (i = 0; i < n; i++) {
        dm += (arreglo[i] - m); //aca se hace la sumatoria de arreglo restandole m
    }
    dm /= n;
    
    for (i = 0; i < n; i++) {
        dt += pow(arreglo[i] - m, 2); // aca la ultima sumatoria del arreglo restandole m y elevandole al cuadrado
    }
    dt = sqrt(dt / n);
    
    printf("\n\n");
    printf("La media es: %f\n", m);
    printf("La desviacion media es: %f\n", dm);
    printf("La desviacion tipica es: %f\n", dt);
    
    return 0;
}
