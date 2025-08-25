#include <stdio.h>

int main() {
    float inicio, fin, f, c;

    printf("Ingrese el valor inicial en Fahrenheit: ");
    scanf("%f", &inicio);

    printf("Ingrese el valor final en Fahrenheit: ");
    scanf("%f", &fin);

    printf("Fahrenheit\tCentigrados\n");

    for (f = inicio; f <= fin; f++) {
        c = (f - 32) * 5 / 9;
        //\t es un tab
        printf("%.2f\t\t%.2f\n", f, c);
    }

    return 0;
}

