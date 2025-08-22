#include <stdio.h>

int main() {
    int numero;          // Número del cual se calculará la raíz cuadrada
    double error_maximo; // Error máximo (precisión)
    double estimacion, nueva_estimacion; // Estimaciones sucesivas de la raíz cuadrada
    
    // Solicitar el número y el error máximo
    printf("Ingrese el número del cual desea calcular la raíz cuadrada: ");
    scanf("%d", &numero);
    
    printf("Ingrese el error máximo deseado: ");
    scanf("%lf", &error_maximo);
    
    // Estimación inicial (comenzamos con la mitad del número)
    estimacion = numero / 2.0;
    
    // Bucle para mejorar la estimación usando el Método de Newton
    do {
        nueva_estimacion = 0.5 * (estimacion + numero / estimacion);  // Fórmula de Newton
        
        // Verificar si la diferencia entre las estimaciones es menor que el error máximo
        if (nueva_estimacion - estimacion < error_maximo && nueva_estimacion - estimacion > -error_maximo) {
            break;  // Salir si la diferencia es suficientemente pequeña
        }
        
        estimacion = nueva_estimacion;  // Actualizar la estimación
    } while (1);  // Continuar hasta alcanzar la precisión deseada
    
    // Mostrar el resultado
    printf("La raíz cuadrada aproximada de %d es %.5f\n", numero, nueva_estimacion);
    
    return 0;
}

