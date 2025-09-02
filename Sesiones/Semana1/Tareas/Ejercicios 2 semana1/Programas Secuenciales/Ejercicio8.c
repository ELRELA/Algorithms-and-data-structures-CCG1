#include <stdio.h>
int main(){
	float x, y;

    printf("Introduce el valor de X: ");
    scanf("%f", &x);

    y = 3 * (x * x) + 7 * x - 15;

    printf("El valor de Y es: %.2f\n", y);

    return 0;
}
