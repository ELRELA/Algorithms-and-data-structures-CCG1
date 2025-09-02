#include <stdio.h>

int main(){
	float dolares, tipoCambioYenes, tipoCambioPesetas, tipoCambioLibras, tipoCambioSoles;
    float yenes, pesetas, libras, soles;

    printf("Introduce la cantidad de dolares a comprar: ");
    scanf("%f", &dolares);

    printf("Introduce el tipo de cambio para yenes: ");
    scanf("%f", &tipoCambioYenes);

    printf("Introduce el tipo de cambio para pesetas: ");
    scanf("%f", &tipoCambioPesetas);

    printf("Introduce el tipo de cambio para libras esterlinas: ");
    scanf("%f", &tipoCambioLibras);

    printf("Introduce el tipo de cambio para nuevos soles: ");
    scanf("%f", &tipoCambioSoles);
    printf("");

    yenes = dolares * tipoCambioYenes;
    pesetas = dolares * tipoCambioPesetas;
    libras = dolares * tipoCambioLibras;
    soles = dolares * tipoCambioSoles;

    printf("Cantidad a pagar en yenes: %.2f \n", yenes);
    printf("Cantidad a pagar en pesetas: %.2f \n", pesetas);
    printf("Cantidad a pagar en libras esterlinas: %.2f \n", libras);
    printf("Cantidad a pagar en nuevos soles: %.2f \n", soles);

    return 0;
}
