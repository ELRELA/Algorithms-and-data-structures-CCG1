#include <stdio.h>

int main() {
    int material[6], cantidad[6],i;
    double costo[6], costo_total = 0.0;

    //para hacerlo de una manera mas sencilla y practica 
    //utilice arreglos. 
    for (i = 0; i < 6; i++) {
        printf("Ingrese el costo por unidad del Material %d: ", i + 1);
        scanf("%lf", costo[i]);
    }

   
    for (i = 0; i < 6; i++) {
        printf("Ingrese la cantidad de unidades para el Material %d: ", i + 1);
        scanf("%d", cantidad[i]);
    }

   
    printf("\nLISTADO DE MATERIALES REQUERIDOS\n");
    printf("MATERIAL\tCANTIDAD DE UNIDADES\tCOSTO ESTIMADO\n");

    for (i = 0; i < 6; i++) {
        printf("%d\t\t%d\t\t\t%.2f\n", i + 1, cantidad[i], costo[i] * cantidad[i]);
        costo_total += costo[i] * cantidad[i];
    }

    
    printf("\nCOSTO TOTAL: %.2f\n", costo_total);

    return 0;
}

