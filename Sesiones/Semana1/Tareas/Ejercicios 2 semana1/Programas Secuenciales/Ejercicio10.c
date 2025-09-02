#include <stdio.h>
int main(){
	char articulo[100];
    float costo, utilidad, impuesto, precioVenta;

    printf("Introduce el nombre del articulo: ");
    scanf("%s", articulo);

    printf("Introduce el costo del articulo: ");
    scanf("%f", &costo);

    utilidad = costo * 1.50;  // 150% de utilidad
    impuesto = (costo + utilidad) * 0.19;  // 19% de impuesto sobre el costo + utilidad
    precioVenta = costo + utilidad + impuesto;

    printf("Articulo: %s\n", articulo);
    printf("Utilidad: %.2f\n", utilidad);
    printf("Impuesto: %.2f\n", impuesto);
    printf("Precio de venta: %.2f\n", precioVenta);

    return 0;
	
}
