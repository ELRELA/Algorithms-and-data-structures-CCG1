#include <stdio.h>
#include <string.h>

int main() {
    int numero, c, d, u;

   
    char unidades[10][30] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char decenas[10][30] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    char centenas[10][30] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

  
    printf("Introduce un numero (maximo 999): ");
    scanf("%d", &numero);

   
    if (numero < 0 || numero > 999) {
        printf("Por favor, ingrese un número entre 0 y 999.\n");
    } else {
        
        c = numero / 100;
        d = (numero % 100) / 10;
        u = numero % 10;

        
        if (c > 0) {
            printf("%s ", centenas[c]);
        }

      
        if (d > 1) {
            printf("%s ", decenas[d]);
            if (u > 0) {
                printf("y %s ", unidades[u]);
            }
        }
        else if (d == 1) {
           
            if (u == 0) {
                printf("%s ", decenas[10]);
            } else {
                char* especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
                printf("%s ", especiales[u]);
            }
        }
        else if (u > 0) {
            
            printf("%s ", unidades[u]);
        }

        printf("\n");
    }

    return 0;
}

