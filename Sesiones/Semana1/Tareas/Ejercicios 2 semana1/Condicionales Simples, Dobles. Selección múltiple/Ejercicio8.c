#include <stdio.h>

int obtenerCodigo(char letra) {
    if (letra == 'A' || letra == 'B' || letra == 'C') return 2;
    if (letra == 'D' || letra == 'E' || letra == 'F') return 3;
    if (letra == 'G' || letra == 'H' || letra == 'I') return 4;
    if (letra == 'J' || letra == 'K' || letra == 'L') return 5;
    if (letra == 'M' || letra == 'N' || letra == 'O') return 6;
    if (letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S') return 7;
    if (letra == 'T' || letra == 'U' || letra == 'V') return 8;
    if (letra == 'W' || letra == 'X' || letra == 'Y' || letra == 'Z') return 9;
    
}

int main() {
    char apellido[100], nombre[100];
    int i;

    printf("Ingrese el apellido: ");
    scanf("%s",apellido);
    
    
    printf("Ingrese el nombre: ");
    scanf("%s",nombre);
   

    printf("Codigo telefonico: ");
    
    // Procesar apellido
    for (i = 0; apellido[i] != '\0'; i++) {
        if (apellido[i] >= 'A' && apellido[i] <= 'Z') {
            printf("%d", obtenerCodigo(apellido[i]));
        }
    }
    
    // Añadir el símbolo *
    printf("*");
    
    // Procesar nombre
    for (i = 0; nombre[i] != '\0'; i++) {
    if (nombre[i] >= 'A' && nombre[i] <= 'Z') {
        printf("%d", obtenerCodigo(nombre[i]));
    }}
    
    printf("\n");

    return 0;
}
