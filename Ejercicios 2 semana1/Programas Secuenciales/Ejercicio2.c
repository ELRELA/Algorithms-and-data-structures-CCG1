#include <stdio.h>
int main(){
	
	double m, E;
	double c=2.99792458*10e10

    printf("Introduce la masa en gramos: ");
    scanf("%lf", &m);

    E = m * C * C;

    printf("La energia producida por la masa es: %.2lf ergios\n", E);

    return 0;	
}
