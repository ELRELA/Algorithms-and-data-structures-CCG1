#include <stdio.h>

int main() {
    int i,cantidad_empleados;
    char nombre[50][50];
    float sueldo_bruto[50], antiguedad[50], precio_total[50], impuesto[50], sueldo_neto[50];
    float subtotal = 0, total_impuesto = 0, total_sueldo_neto = 0;

    printf("Ingrese la cantidad de empleados: ");
    scanf("%d", &cantidad_empleados);

    for (i = 0; i < cantidad_empleados; i++) {
        printf("\nIngrese el nombre del empleado %d: ", i + 1);
        scanf("%s", nombre[i]);
        printf("Ingrese el sueldo mensual de %s: ", nombre[i]);
        scanf("%f", &sueldo_bruto[i]);
        printf("Ingrese la antiguedad de %s en anos: ", nombre[i]);
        scanf("%f", &antiguedad[i]);
		// si la antiguedad del emepleado es mayor a 3 se le aplica una bonificaion de antiguedad sino nada.
        sueldo_bruto[i] = (sueldo_bruto[i] / 2) + (antiguedad[i] > 2 ? (sueldo_bruto[i] * 0.02 * antiguedad[i]) : 0);

        if (sueldo_bruto[i] <= 300) {
            impuesto[i] = sueldo_bruto[i] * 0.03;
        } else if (sueldo_bruto[i] <= 700) {
            impuesto[i] = 50 + (sueldo_bruto[i] - 300) * 0.05;
        } else if (sueldo_bruto[i] <= 1000) {
            impuesto[i] = 50 + (sueldo_bruto[i] - 700) * 0.08;
        } else if (sueldo_bruto[i] <= 1700) {
            impuesto[i] = 80 + (sueldo_bruto[i] - 1000) * 0.16;
        } else {
            impuesto[i] = 150 + (sueldo_bruto[i] - 1700) * 0.20;
        }

        sueldo_neto[i] = sueldo_bruto[i] - impuesto[i];

        subtotal += sueldo_bruto[i];
        total_impuesto += impuesto[i];
        total_sueldo_neto += sueldo_neto[i];
    }

    printf("\nNOMINA QUINCENAL\n");
    printf("NOMBRE\t\tSDO. BRUTO\tIMPUESTO\tSDO. NETO\n");
    printf("-----------------------------------------------\n");

    for (i = 0; i < cantidad_empleados; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", nombre[i], sueldo_bruto[i], impuesto[i], sueldo_neto[i]);
    }

    printf("-----------------------------------------------\n");
    printf("TOTAL\t\t%.2f\t\t%.2f\t\t%.2f\n", subtotal, total_impuesto, total_sueldo_neto);

    return 0;
}

