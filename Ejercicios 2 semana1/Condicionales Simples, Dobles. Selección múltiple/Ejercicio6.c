#include <stdio.h>

int main() {
    float temperatura, celsius, fahrenheit, kelvin, rankine;
    int tipo_conversion;
    
    printf("Seleccione el tipo de grados a convertir:\n");
    printf("1. Fahrenheit\n");
    printf("2. Celsius\n");
    printf("3. Kelvin\n");
    printf("4. Rankine\n");
    scanf("%d", &tipo_conversion);
    
    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);
    
    switch(tipo_conversion) {
        case 1: 
            celsius = (temperatura - 32) * 5/9;
            kelvin = celsius + 273;
            rankine = temperatura + 460;
            printf("%.2f grados Fahrenheit equivalen a %.2f grados Celsius, %.2f Kelvin y %.2f Rankine\n", temperatura, celsius, kelvin, rankine);
            break;
        case 2: 
            fahrenheit = (temperatura * 9/5) + 32;
            kelvin = temperatura + 273;
            rankine = fahrenheit + 460;
            printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit, %.2f Kelvin y %.2f Rankine\n", temperatura, fahrenheit, kelvin, rankine);
            break;
        case 3: 
            celsius = temperatura - 273;
            fahrenheit = (celsius * 9/5) + 32;
            rankine = temperatura * 9/5;
            printf("%.2f grados Kelvin equivalen a %.2f grados Celsius, %.2f grados Fahrenheit y %.2f Rankine\n", temperatura, celsius, fahrenheit, rankine);
            break;
        case 4: 
            fahrenheit = temperatura - 460;
            celsius = (fahrenheit - 32) * 5/9;
            kelvin = celsius + 273;
            printf("%.2f grados Rankine equivalen a %.2f grados Fahrenheit, %.2f grados Celsius y %.2f Kelvin\n", temperatura, fahrenheit, celsius, kelvin);
            break;
        default:
            printf("Opcion no valida.\n");
    }
    
    return 0;
}

