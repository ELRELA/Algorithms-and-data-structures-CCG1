#include <stdio.h>

int main() {
    int j,cantidad_articulos;
    char articulo[50][50];
    int unidades_producidas[50];
    float factor_costo[50];
    float costo_fijo[50];
    float costo_produccion[50];
    float total_costo_produccion = 0;

    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &cantidad_articulos);

    int i = 0;
    do {
        printf("\nIngrese el nombre del articulo %d:", i + 1);
        scanf("%s", articulo[i]);
        printf("Ingrese la cantidad de unidades producidas:");
        scanf("%i", &unidades_producidas[i]);
        printf("Ingrese el factor de costo:");
        scanf("%f", &factor_costo[i]);
        printf("Ingrese el costo fijo:");
        scanf("%f", &costo_fijo[i]);

        costo_produccion[i] = unidades_producidas[i] * factor_costo[i] + costo_fijo[i];
        total_costo_produccion += costo_produccion[i];

        i++;
    } while (i < cantidad_articulos);

    printf("\n");
    printf("ARTICULO                       UNIDADES PRODUCIDAS   FACTOR COSTO  COSTO FIJO  COSTO DE PRODUCCION\n");
    printf("-----------------------------------------------------------------------------------------------\n");

    for (j = 0; j < cantidad_articulos; j++) {
        printf("%s \t\t\t %d  \t\t\t %f \t\t%f \t\t%f\n", articulo[j], unidades_producidas[j], factor_costo[j], costo_fijo[j], costo_produccion[j]);
    }

    printf("-----------------------------------------------------------------------------------------------\n");
    printf("TOTAL %d ARTICULOS\n", cantidad_articulos);
    printf("TOTAL COSTO DE PRODUCCION: %f\n", total_costo_produccion);

    return 0;
}

