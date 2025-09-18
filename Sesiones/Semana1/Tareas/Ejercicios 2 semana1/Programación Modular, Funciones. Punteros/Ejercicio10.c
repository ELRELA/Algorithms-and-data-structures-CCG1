#include <stdio.h>

void seleccionarProducto(float *precio, char *nombre) {
    int opcion;
    printf("********************************\n");
    printf("A. Cafe con S/.1.00\n");
    printf("B. Cafe con leche S/.1.50\n");
    printf("C. Leche S/.2.00\n");
    printf("Elegir opcion: ");
    scanf(" %c", &opcion);
    
    switch(opcion) {
        case 'A':
            *precio = 1.00;
            *nombre = 'C';  // Cafe
            break;
        case 'B':
            *precio = 1.50;
            *nombre = 'L';  // Cafe con leche
            break;
        case 'C':
            *precio = 2.00;
            *nombre = 'M';  //Leche
            break;
        default:
            printf("Opcion no valida\n");
            *precio = 0;
            *nombre = 'N';  // opc invalida
    }
}

void pagarYDarVuelto(float precio, float *vuelto) {
    float monto;
    printf("********************************\n");
    printf("Precio: S/. %.2f\n", precio);
    printf("Monto: ");
    scanf("%f", &monto);

    if(monto >= precio) {
        *vuelto = monto - precio;
    } else {
        *vuelto = 0;
        printf("El monto es insuficiente\n");
    }
}

int main() {
    int opcion;
    float precio = 0, vuelto;
    char nombre;

    do {
        printf("\n1. Seleccionar producto\n");
        printf("2. Pagar y dar vuelto\n");
        printf("3. Salir\n");
        printf("Seleccione opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                seleccionarProducto(&precio, &nombre);
                break;
            case 2:
                if(precio == 0) {
                    printf("Primero debe seleccionar un producto.\n");
                } else {
                    pagarYDarVuelto(precio, &vuelto);
                    if(vuelto > 0) {
                        printf("Usted compro ");
                        if(nombre == 'C') {
                            printf("Cafe");
                        } else if(nombre == 'L') {
                            printf("Cafe con leche");
                        } else if(nombre == 'M') {
                            printf("Leche");
                        }
                        printf(" de precio S/. %.2f\n", precio);
                        printf("su vuelto es S/. %.2f\n", vuelto);
                    }
                }
                break;
            case 3:
                printf("Gracias por usar la maquina expendedora.\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }

    } while(opcion != 3);

    return 0;
}

