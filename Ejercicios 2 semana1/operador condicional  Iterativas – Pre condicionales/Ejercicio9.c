#include <stdio.h>

int main() {
    int num_empleados;
    
    printf("Ingrese la cantidad de empleados: ");
    scanf("%d", &num_empleados);
    
    char nombres[num_empleados][50];
    float sueldos_anteriores[num_empleados], sueldos_actuales[num_empleados];
    int i,tipos_empleados[num_empleados];
    
    for (i = 0; i < num_empleados; i++) {
        printf("\nEmpleado %d:\n", i + 1);
        printf("Ingrese el nombre del empleado: ");
        scanf("%s", nombres[i]);
        
        printf("Ingrese el sueldo anterior: ");
        scanf("%f", &sueldos_anteriores[i]);
        
        printf("Ingrese el tipo de empleado (1-5): ");
        scanf("%i", &tipos_empleados[i]);
        
        sueldos_actuales[i] = (tipos_empleados[i] == 1) ? sueldos_anteriores[i] * 1.05 :
                              (tipos_empleados[i] == 2) ? sueldos_anteriores[i] * 1.07 :
                              (tipos_empleados[i] == 3) ? sueldos_anteriores[i] * 1.10 :
                              (tipos_empleados[i] == 4) ? sueldos_anteriores[i] * 1.14 :
                              (tipos_empleados[i] == 5) ? sueldos_anteriores[i] * 1.18 : sueldos_anteriores[i];
    }

    printf("\nNOMBRE\t\tSUELDO ANTERIOR\t\tSUELDO ACTUAL\n");

    for (i = 0; i < num_empleados; i++) {
        printf("%s\t\t%.2f\t\t\t%.2f\n", nombres[i], sueldos_anteriores[i], sueldos_actuales[i]);
    }

    return 0;
}


