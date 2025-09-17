#include <stdio.h>

#define MAX_ALUMNOS 50  //Defino un numero max de alumnos para poder trabajar con las funciones dado que nos pide inicialiar. 

void ingresarDatos(char nombres[][50], float promedios[], int *numAlumnos) {
	int i;
    printf("Ingresa el numero de alumnos: ");
    scanf("%d", numAlumnos);
    
    for (i = 0; i < *numAlumnos; i++) {
        printf("Alumno %d\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]s", nombres[i]);
        printf("Promedio: ");
        scanf("%f", &promedios[i]);
    }
}

void mostrarDatos(char nombres[][50], float promedios[], int numAlumnos) {
	int i;
    printf("\nLista de alumnos:\n");
    for (i = 0; i < numAlumnos; i++) {
        printf("Nombre: %s\tPromedio: %.2f\n", nombres[i], promedios[i]);
    }
}

void mostrarMenu() {
    printf("\nMenu de opciones:\n");
    printf("1. Ingresar datos de alumnos\n");
    printf("2. Mostrar datos de alumnos\n");
    printf("3. Salir\n");
    printf("Selecciona una opcion: ");
}

int main() {
    char nombres[MAX_ALUMNOS][50];
    float promedios[MAX_ALUMNOS];
    int numAlumnos = 0;
    int opcion;
    
    do {
        mostrarMenu();
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                ingresarDatos(nombres, promedios, &numAlumnos);
                break;
            case 2:
                mostrarDatos(nombres, promedios, numAlumnos);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida. Intenta nuevamente.\n");
        }
    } while (opcion != 3);
    
    return 0;
}
