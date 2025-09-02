#include <stdio.h>
int main(){
	
	char nombre[100];
    float cal1, cal2, cal3, cal4, promedio;

    printf("Introduce el nombre del estudiante: ");
    scanf("%s", nombre);

    printf("Introduce la calificación 1: ");
    scanf("%f", &cal1);

    printf("Introduce la calificación 2: ");
    scanf("%f", &cal2);

    printf("Introduce la calificación 3: ");
    scanf("%f", &cal3);

    printf("Introduce la calificación 4: ");
    scanf("%f", &cal4);

    promedio = (cal1 * 0.30) + (cal2 * 0.20) + (cal3 * 0.10) + (cal4 * 0.40);

    printf("El promedio de calificaciones de %s es: %.2f\n", nombre, promedio);

    return 0;
}
