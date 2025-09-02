#include <stdio.h>

int main() {
    int viajes = 0, personas = 0;
    float peso_viaje = 0.0, total_personas = 0.0, total_peso = 0.0, promedio_personas = 0.0, promedio_peso = 0.0;
    int numero_de_viajes;

    printf("Ingrese la cantidad de viajes: ");
    scanf("%d", &numero_de_viajes);

    while (viajes < numero_de_viajes) {
        printf("Ingrese cantidad de personas: ");
        scanf("%d", &personas);
        printf("Ingrese peso de viaje: ");
        scanf("%f", &peso_viaje);

        total_personas += personas;
        total_peso += peso_viaje;
        viajes++;
    }

    if (viajes > 0) {
        promedio_personas = total_personas / viajes;
        promedio_peso = total_peso / viajes;

        printf("\nESTADISTICA DEL DIA\n");
        printf("CANTIDAD DE VIAJES: %d\n", viajes);
        printf("CANTIDAD DE PERSONAS TRANSPORTADAS: %.0f\n", total_personas);
        printf("PESO TRANSPORTADO (KILOS): %.2f\n", total_peso);
        printf("PROMEDIO DE PERSONAS POR VIAJE: %.2f\n", promedio_personas);
        printf("PROMEDIO DE PESO POR VIAJE: %.2f\n", promedio_peso);
    } else {
        printf("No se realizaron viajes.\n");
    }

    return 0;
}

