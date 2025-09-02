#include <stdio.h>

int main() {
    int i,cantidad_articulos;
    char cliente[100];
    char articulo[50][50];
    int cantidad[50];
    float precio_unitario[50], precio_total[50];
    float subtotal = 0, impuesto, total;

  
    printf("Ingrese el nombre del cliente: ");
    scanf("%s",cliente);  

    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &cantidad_articulos);

   
    for (i = 0; i < cantidad_articulos; i++) {
        printf("\nIngrese el nombre del articulo %d: ", i + 1);
        scanf("%s", articulo[i]);  
        printf("Ingrese la cantidad de %s: ", articulo[i]);
        scanf("%d", &cantidad[i]); 
        printf("Ingrese el precio unitario de %s: ", articulo[i]);
        scanf("%f", &precio_unitario[i]);  

    
        precio_total[i] = cantidad[i] * precio_unitario[i];
        subtotal += precio_total[i];  
    }

   
    impuesto = subtotal * 0.19;  
    total = subtotal + impuesto;  

    
    printf("\nFACTURA\n");
    printf("NOMBRE DEL CLIENTE: %s\n", cliente);
    printf("ARTICULO\tCANTIDAD\tPRECIO UNITARIO\tPRECIO TOTAL\n");
    printf("----------------------------------------------------------\n");

    for (i = 0; i < cantidad_articulos; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%.2f\n", articulo[i], cantidad[i], precio_unitario[i], precio_total[i]);  // Imprimimos los datos de cada artículo
    }


    printf("----------------------------------------------------------\n");
    printf("SUBTOTAL\t%.2f\n", subtotal);
    printf("IMPUESTO (19%%)\t%.2f\n", impuesto);
    printf("TOTAL\t\t%.2f\n", total);

    return 0;
}

