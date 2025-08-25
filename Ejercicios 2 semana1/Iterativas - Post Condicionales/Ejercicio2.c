#include <stdio.h>

int main() {
    int i,cantidad_articulos;
    char articulo[50][50];
    double costo_produccion[50], utilidad[50], impuesto[50], precio_venta[50];
    float total_costo_produccion = 0, total_utilidad = 0, total_impuesto = 0, total_precio_venta = 0;

    printf("Ingrese la cantidad de articulos: ");
    scanf("%i", &cantidad_articulos);

    
    for (i = 0; i < cantidad_articulos; i++) {
        printf("\nIngrese el nombre del articulo %d: ", i + 1);
        scanf("%s", articulo[i]);
        
        printf("Ingrese el costo de produccion del articulo: ");
        scanf("%lf", &costo_produccion[i]);

        utilidad[i] = 1.2 * costo_produccion[i];  
        impuesto[i] = 0.15 * (costo_produccion[i] + utilidad[i]);  
        precio_venta[i] = costo_produccion[i] + utilidad[i] + impuesto[i];  

        total_costo_produccion += costo_produccion[i];
        total_utilidad += utilidad[i];
        total_impuesto += impuesto[i];
        total_precio_venta += precio_venta[i];
    }

    
    printf("\n");
    printf("ARTICULO                        COSTO DE PRODUCCION   UTILIDAD   IMPUESTO    PRECIO DE VENTA\n");
    printf("---------------------------------------------------------------------------------------------\n");

    for (i = 0; i < cantidad_articulos; i++) {
    printf("%s                          %lf           %lf     %lf         %f\n", articulo[i], costo_produccion[i], utilidad[i], impuesto[i], precio_venta[i]);
    }

    
    printf("---------------------------------------------------------------------------------------------\n");
    printf("TOTAL                        %f             %f     %f        %f\n", total_costo_produccion, total_utilidad, total_impuesto, total_precio_venta);

    return 0;
}

