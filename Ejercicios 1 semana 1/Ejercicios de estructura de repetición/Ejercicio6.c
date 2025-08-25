#include <stdio.h>

int main() {
    int numero;          
    double error_maximo; 
    double estimacion, nueva_estimacion; 
    
    
    printf("Ingrese el número del cual desea calcular la raiz cuadrada: ");
    scanf("%d", &numero);
    
    printf("Ingrese el error máximo deseado: ");
    scanf("%lf", &error_maximo);
    
    
    estimacion = numero / 2.0;
    
    
    do {
        nueva_estimacion = 0.5 * (estimacion + numero / estimacion);  
        
       
        if (nueva_estimacion - estimacion < error_maximo && nueva_estimacion - estimacion > -error_maximo) {
            break; 
        }
        
        estimacion = nueva_estimacion; 
    } while (1);  
    
    
    printf("La raíz cuadrada aproximada de %d es %.5f\n", numero, nueva_estimacion);
    
    return 0;
}

