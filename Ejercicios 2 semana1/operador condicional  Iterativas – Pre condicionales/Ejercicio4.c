#include <stdio.h>
#include <math.h>

int main() {
    float x;
	//el \t es un salto de linea
    printf("X\t\tSecante X\tCosecante X\tTangente X\n");

    for (x = -1; x <= 1; x += 0.1) {
        printf("%.1f\t\t%.2f\t\t%.2f\t\t%.2f\n", x, 1/cos(x), 1/sin(x), tan(x));
    }

    return 0;
}

