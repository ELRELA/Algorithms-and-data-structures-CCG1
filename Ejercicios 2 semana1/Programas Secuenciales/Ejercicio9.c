#include <stdio.h>
int main(){
	float c, f;

    printf("Introduce la temperatura en grados Centigrados: ");
    scanf("%f", &c);

    f = (9.0 / 5.0) * c + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n", f);

    return 0;
}
