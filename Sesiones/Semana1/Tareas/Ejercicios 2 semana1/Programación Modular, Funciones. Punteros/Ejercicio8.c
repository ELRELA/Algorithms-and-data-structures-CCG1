#include <stdio.h>
#include <math.h>

void calcularZ(double y[], int x[], double z[], int n){
	int i;
    for(i = 0; i < n; i++){
        z[i] = pow(y[i], x[i]);
    }
}

void leerValores(double y[], int x[], int n){
	int i;
    for(i = 0; i < n; i++){
        printf("Introduce el valor de Y[%d]: ", i+1);
        scanf("%lf", &y[i]);
        printf("Introduce el valor de X[%d]: ", i+1);
        scanf("%d", &x[i]);
    }
}

void imprimirResultados(double y[], int x[], double z[], int n){
	int i;
    for(i = 0; i < n; i++){
        printf("Para X[%d] = %d y Y[%d] = %.2f, el valor de Z es: %.2f\n", i+1, x[i], i+1, y[i], z[i]);
    }
}

int main(){
    int n = 10;  
    double y[n], z[n];
    int x[n];

    leerValores(y, x, n);       
    calcularZ(y, x, z, n);     
    imprimirResultados(y, x, z, n); 

    return 0;
}

