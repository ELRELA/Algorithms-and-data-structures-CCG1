#include <stdio.h>
int main(){
	
	float pies, yardas, pulgadas, centimetros, metros;

    printf("Introduce el numero de pies: ");
    scanf("%f", &pies);

    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros/100;

    printf("Equivalente en yardas: %.2f\n", yardas);
    printf("Equivalente en pies: %.2f\n", pies);
    printf("Equivalente en pulgadas: %.2f\n", pulgadas);
    printf("Equivalente en centimetros: %.2f\n", centimetros);
    printf("Equivalente en metros: %.2f\n", metros);

    return 0;
}
