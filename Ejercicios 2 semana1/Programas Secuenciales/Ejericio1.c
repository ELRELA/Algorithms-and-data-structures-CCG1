#include <stdio.h>
int main(){
	
	
	double m1,m2,d;
	double f;
	double g=6.673*10e-8;
	//ingresando valores
	//masa1
	scanf("%lf",&m1);
	//masa2
	scanf("%lf",&m2);
	//distancia
	scanf("%lf",&d);
	
	//aplicando formula
	f=(g*m1*m2)/(d*d);
	
	//imprimiendo
	printf("La fuerza de atraccion es : %.2lf", f);
	
	return 0;
}
