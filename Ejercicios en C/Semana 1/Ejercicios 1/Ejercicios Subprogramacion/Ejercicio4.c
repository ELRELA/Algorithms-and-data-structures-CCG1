#include <stdio.h>
#include <string.h>

// Vectores para las unidades, decenas, centenas, etc.
char* unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
char* decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
char* centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

// Función para escribir el número por extenso
void escribirPorExtenso(int numero) {
    int c, d, u;

    // Extraemos las centenas, decenas y unidades
    c = numero / 100;
    d = (numero % 100) / 10;
    u = numero % 10;

    // Impresión de centenas
    if (c > 0) {
        printf("%s ", centenas[c]);
    }

    // Impresión de decenas
    if (d > 1) {
        printf("%s ", decenas[d]);
        if (u > 0) {
            printf("y %s ", unidades[u]);
        }
    }
    else if (d == 1) {
        // Para los números entre 10 y 19
        if (u == 0) {
            printf("%s ", decenas[10]);
        } else {
            char* especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
            printf("%s ", especiales[u]);
        }
    }
    else if (u > 0) {
        // Impresión de unidades
        printf("%s ", unidades[u]);
    }

    printf("\n");
}

int main() {
    int numero;

    // Solicitar al usuario el número
    printf("Introduce un número (máximo 999): ");
    scanf("%d", &numero);

    // Verificar si el número es válido
    if (numero < 0 || numero > 999) {
        printf("Por favor, ingrese un número entre 0 y 999.\n");
    } else {
        escribirPorExtenso(numero); // Llamada para escribir el número por extenso
    }

    return 0;
}

