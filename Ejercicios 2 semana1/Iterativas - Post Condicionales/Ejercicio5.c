#include <stdio.h>

int main() {
    char cuenta_habiente[100];
    float saldo_inicial, deposito, retiro, saldo;
    int i,movimiento = 0, a = 0;
    float total_depositos = 0, total_retiros = 0;
    float depositos[50], retiros[50], saldos[50];
    char opcion;

    printf("Ingrese el nombre del cuentahabiente: ");
    scanf("%s",cuenta_habiente);

    printf("Ingrese el saldo inicial: ");
    scanf("%f", &saldo_inicial);

    saldo = saldo_inicial;

    printf("\nESTADO DE CUENTA\n");
    printf("CUENTA HABIENTE: %s \n", cuenta_habiente);
    printf("SALDO INICIAL: %.2f\n", saldo_inicial);

    while (a != 1) {
        printf("\nDesea realizar un deposito o retiro? (d/r para deposito/retiro, s para salir): ");
        scanf(" %c", &opcion);  

        if (opcion == 'd') {
            printf("Ingrese deposito: ");
            scanf("%f", &deposito);
            saldo += deposito;
            total_depositos += deposito;
            depositos[movimiento] = deposito;
            retiros[movimiento] = 0;
            saldos[movimiento] = saldo;
            movimiento++;
        } else if (opcion == 'r') {
            printf("Ingrese retiro: ");
            scanf("%f", &retiro);
            if (retiro <= saldo) {
                saldo -= retiro;
                total_retiros += retiro;
                depositos[movimiento] = 0;
                retiros[movimiento] = retiro;
                saldos[movimiento] = saldo;
                movimiento++;
            } else {
                printf("Saldo insuficiente para el retiro.\n");
            }
        } else if (opcion == 's') {
            printf("Ingrese 1 para salir del programa: ");
            scanf("%d", &a);
        } else {
            printf("Opción inválida. Intente de nuevo.\n");
        }
    }

    
    printf("\nESTADO DE MOVIMIENTOS\n");
    printf("MOVIMIENTO\tDEPOSITO\tRETIRO\tSALDO\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < movimiento; i++) {
        printf("%d\t\t%.2f\t\t%.2f\t%.2f\n", i + 1, depositos[i], retiros[i], saldos[i]);
    }

    printf("-------------------------------------------------\n");
    printf("TOTALES\t\t%.2f\t\t%.2f\t%.2f\n", total_depositos, total_retiros, saldo);

    return 0;
}

