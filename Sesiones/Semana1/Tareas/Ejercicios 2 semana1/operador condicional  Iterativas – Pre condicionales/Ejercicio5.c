#include <stdio.h>


int main() {
    int a, b, c;
    float discriminante;

    for (b = 1; b <= 7; b++) {
        for (c = 7; c >= 1; c--) {
            	a=b-c;
                discriminante = b*b - 4*a*c;

                if (discriminante > 0) {
                    printf("Tiene raices reales \n");
                } else if (discriminante == 0) {
                    printf("Tiene una raiz unica \n");
                } else {
                    printf("Tiene raices complejas \n");
                }
            
        }
    }

    return 0;
}

