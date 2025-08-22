#include <stdio.h>

int main() {
    int numero;          // N�mero del cual se calcular� la ra�z cuadrada
    double error_maximo; // Error m�ximo (precisi�n)
    double estimacion, nueva_estimacion; // Estimaciones sucesivas de la ra�z cuadrada
    
    // Solicitar el n�mero y el error m�ximo
    printf("Ingrese el n�mero del cual desea calcular la ra�z cuadrada: ");
    scanf("%d", &numero);
    
    printf("Ingrese el error m�ximo deseado: ");
    scanf("%lf", &error_maximo);
    
    // Estimaci�n inicial (comenzamos con la mitad del n�mero)
    estimacion = numero / 2.0;
    
    // Bucle para mejorar la estimaci�n usando el M�todo de Newton
    do {
        nueva_estimacion = 0.5 * (estimacion + numero / estimacion);  // F�rmula de Newton
        
        // Verificar si la diferencia entre las estimaciones es menor que el error m�ximo
        if (nueva_estimacion - estimacion < error_maximo && nueva_estimacion - estimacion > -error_maximo) {
            break;  // Salir si la diferencia es suficientemente peque�a
        }
        
        estimacion = nueva_estimacion;  // Actualizar la estimaci�n
    } while (1);  // Continuar hasta alcanzar la precisi�n deseada
    
    // Mostrar el resultado
    printf("La ra�z cuadrada aproximada de %d es %.5f\n", numero, nueva_estimacion);
    
    return 0;
}

