#include <stdio.h>
#include <math.h>
int main(){
	float largo, ancho, precioMetro, area, precioTotal;
    
    printf("Ingrese el largo del terreno: ");
    scanf("%f", &largo);
    
    printf("Ingrese el ancho del terreno: ");
    scanf("%f", &ancho);
    
    printf("Ingrese el precio por metro cuadrado: ");
    scanf("%f", &precioMetro);
    
    area = largo * ancho;
    
    if (area > 400) {
        precioTotal = area * precioMetro * 0.90;
    } else {
        precioTotal = area * precioMetro;
    }
    
    printf("El precio del terreno es: %.2f\n", precioTotal);
    

	return 0;
}
