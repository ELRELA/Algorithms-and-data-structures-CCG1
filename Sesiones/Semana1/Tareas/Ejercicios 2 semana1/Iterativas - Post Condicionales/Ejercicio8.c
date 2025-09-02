#include <stdio.h>

int main() {
    int i,cantidad_empleados;
    float sueldo_mensual, sueldo_bruto, impuesto, sueldo_neto;
    float salario_minimo, total_sueldo_bruto = 0.0, total_impuesto = 0.0, total_sueldo_neto = 0.0;
    char nombres[100][50];
    float sueldos_brutos[100], impuestos[100], sueldos_netos[100];

    printf("Ingrese el salario minimo general: ");
    scanf("%f", &salario_minimo);

    printf("Ingrese la cantidad de empleados: ");
    scanf("%i", &cantidad_empleados);

    
    for (i = 0; i < cantidad_empleados; i++) {
        printf("\nIngrese el nombre del empleado %d: ", i + 1);
        scanf("%s", nombres[i]);

        printf("Ingrese el sueldo mensual del empleado %d: ", i + 1);
        scanf("%f", &sueldo_mensual);

        
        sueldo_bruto = sueldo_mensual / 2;

    
        if (sueldo_bruto <= salario_minimo) {
            impuesto = 0;
        } else {
            impuesto = (sueldo_bruto - salario_minimo) * 0.05;
        }

        
        sueldo_neto = sueldo_bruto - impuesto;

      
        sueldos_brutos[i] = sueldo_bruto;
        impuestos[i] = impuesto;
        sueldos_netos[i] = sueldo_neto;

        total_sueldo_bruto += sueldo_bruto;
        total_impuesto += impuesto;
        total_sueldo_neto += sueldo_neto;
    }

    
    printf("\nNOMINA QUINCENAL\n");
    printf("--------------------------------------------\n");
    printf("NOMBRE\t\tSUELDO BRUTO\tIMPUESTO\tSUELDO NETO\n");
    printf("--------------------------------------------\n");

    for (i = 0; i < cantidad_empleados; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n", nombres[i], sueldos_brutos[i], impuestos[i], sueldos_netos[i]);
    }

 
    printf("--------------------------------------------\n");
    printf("TOTAL\t\t%.2f\t\t%.2f\t\t%.2f\n", total_sueldo_bruto, total_impuesto, total_sueldo_neto);

    return 0;
}


