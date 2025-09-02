#include <stdio.h>
#include <string.h>

int main() {
    int i,j,total_autos = 0;
    float total_costo = 0.0, total_impuesto = 0.0, total_precio_venta = 0.0;
    float costo, impuesto, precio_venta;
    char marcas_seleccionadas[100][50];
    char origenes_seleccionados[100][50];
    char marcas[100][50];
    char origenes[100][50] = {"ALEMANIA", "JAPON", "ITALIA", "USA"};
    int autos_origen[4] = {0, 0, 0, 0}; 
    int cantidad;

    printf("Ingrese la cantidad de autos importados: ");
    scanf("%d", &cantidad);

    for (i = 0; i < cantidad; i++) {
        printf("\nIngrese la marca del auto: %i ",i+1);
        scanf("%s", marcas[total_autos]);

        printf("Seleccione el origen del auto (0 - ALEMANIA, 1 - JAPON, 2 - ITALIA, 3 - USA):\n");
        for (j = 0; j < 4; j++) {
            printf("%d. %s\n", j, origenes[j]);
        }
        int origen_index;
        scanf("%d", &origen_index);
		//hice uso del strcpy para poder mandar los origenes predeterminados a otro arreglo donde se almacenaran para hacer el reporte final.
        strcpy(origenes_seleccionados[total_autos], origenes[origen_index]);

        printf("Ingrese costo del auto: ");
        scanf("%f", &costo);

        if (origen_index == 0) {
            impuesto = costo * 0.20;
        } else if (origen_index == 1) {
            impuesto = costo * 0.15;
        } else if (origen_index == 2) {
            impuesto = costo * 0.18;
        } else if (origen_index == 3) {
            impuesto = costo * 0.10;
        } else {
            impuesto = 0;
            printf("Origen no valido.\n");
        }

        precio_venta = costo + impuesto;

        strcpy(marcas_seleccionadas[total_autos], marcas[total_autos]);

        total_costo += costo;
        total_impuesto += impuesto;
        total_precio_venta += precio_venta;
        autos_origen[origen_index]++; 
        total_autos++;
    }

    printf("\nREPORTE DE AUTOS IMPORTADOS\n");
    printf("----------------------------------------------------------\n");
    printf("MARCA       ORIGEN       COSTO      IMPUESTO     PRECIO VTA.\n");
    printf("----------------------------------------------------------\n");

    for (i = 0; i < total_autos; i++) {
        printf("%s\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n", marcas_seleccionadas[i], origenes_seleccionados[i], 
               total_costo, total_impuesto, total_precio_venta);
    }

    printf("\nTOTAL AUTOS: %d\n", total_autos);
    printf("TOTAL COSTO: %.2f\n", total_costo);
    printf("TOTAL IMPUESTO: %.2f\n", total_impuesto);
    printf("TOTAL PRECIO VTA.: %.2f\n", total_precio_venta);

    int max_autos = autos_origen[0];
    int pais_index = 0;

    for (i = 1; i < 4; i++) {
        if (autos_origen[i] > max_autos) {
            max_autos = autos_origen[i];
            pais_index = i;
        }
    }

    printf("\nCANTIDAD DE VEHICULOS POR PAIS DE ORIGEN:\n");
    for (i = 0; i < 4; i++) {
        printf("%s: %d autos\n", origenes[i], autos_origen[i]);
    }

    printf("\nPAIS DEL QUE SE IMPORTO MAS AUTOS: %s\n", origenes[pais_index]);

    return 0;
}


