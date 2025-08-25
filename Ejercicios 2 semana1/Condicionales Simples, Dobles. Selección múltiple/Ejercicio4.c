#include <stdio.h>

int main() {
    char nombre[100];
    int tipo_empleado, horas_trabajadas;
    float pago_por_hora, sueldo_base, horas_extras, sueldo_total;

    printf("Ingrese el nombre del empleado: ");
    scanf("%s",nombre);
   

    printf("Ingrese el tipo de empleado (1, 2, 3, 4): ");
    scanf("%d", &tipo_empleado);

    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &pago_por_hora);

    // Calcular sueldo base
    if (horas_trabajadas <= 40) {
        sueldo_base = horas_trabajadas * pago_por_hora;
        horas_extras = 0;
    } else {
        horas_extras = horas_trabajadas - 40;
        sueldo_base = 40 * pago_por_hora;
    }

    // Calcular el pago adicional por horas extras
    if (horas_extras > 0) {
        if (tipo_empleado == 1) {
            sueldo_base += horas_extras * (pago_por_hora * 1.5);  // Tipo 1
        } else if (tipo_empleado == 2) {
            sueldo_base += horas_extras * (pago_por_hora * 2);    // Tipo 2
        } else if (tipo_empleado == 3) {
            sueldo_base += horas_extras * (pago_por_hora * 2.5);  // Tipo 3
        } else if (tipo_empleado == 4) {
            sueldo_base += horas_extras * (pago_por_hora * 3);    // Tipo 4
        }
    }

    // Imprimir el sueldo total
    printf("El sueldo total de %s es: %.2f\n", nombre, sueldo_base);

    return 0;
}


