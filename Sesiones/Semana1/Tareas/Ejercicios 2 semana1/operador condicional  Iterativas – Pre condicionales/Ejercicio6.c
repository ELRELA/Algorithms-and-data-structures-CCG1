#include <stdio.h>

int main() {
    int meses = 10 * 12, i = 1;
    double capital = 0.0, deposito = 1000.0, tasa = 0.03;

    while (i <= meses) {
        capital = capital * (1 + tasa);
        capital += deposito;
        i++;
    }

    printf("Monto final despues de 10 anos: %.2f\n", capital);
    return 0;
}

