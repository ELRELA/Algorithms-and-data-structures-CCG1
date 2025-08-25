#include <stdio.h>
#include <math.h>


double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}


double areaCuadrado(double lado) {
    return lado * lado;
}


double areaCirculo(double radio) {
    return M_PI * radio * radio;
}


double areaRectangulo(double largo, double ancho) {
    return largo * ancho;
}

int main() {
    int opcion;
    double resultado, base, altura, lado, radio, largo, ancho;

    
    printf("Seleccione la figura geometrica para calcular el area:\n");
    printf("1. Triangulo\n");
    printf("2. Cuadrado\n");
    printf("3. Circulo\n");
    printf("4. Rectangulo\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

  
    switch(opcion) {
        case 1: 
            printf("Ingrese la base del triangulo: ");
            scanf("%lf", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%lf", &altura);
            resultado = areaTriangulo(base, altura);
            printf("El area del triangulo es: %.2f\n", resultado);
            break;
        case 2: 
            printf("Ingrese el lado del cuadrado: ");
            scanf("%lf", &lado);
            resultado = areaCuadrado(lado);
            printf("El area del cuadrado es: %.2f\n", resultado);
            break;
        case 3: 
            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &radio);
            resultado = areaCirculo(radio);
            printf("El area del circulo es: %.2f\n", resultado);
            break;
        case 4: 
            printf("Ingrese el largo del rectangulo: ");
            scanf("%lf", &largo);
            printf("Ingrese el ancho del rectangulo: ");
            scanf("%lf", &ancho);
            resultado = areaRectangulo(largo, ancho);
            printf("El area del rectangulo es: %.2f\n", resultado);
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

    return 0;
}

