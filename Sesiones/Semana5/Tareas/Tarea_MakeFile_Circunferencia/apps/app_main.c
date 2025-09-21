#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "circunferencia_lab.h"

int main(){
	Punto p0=create_point(0,0);
	Punto p1=create_point(10,10);

	Circun cir=create_circunfenrencia(p0,3);

	if(verificar_pertenencia(cir,p1)==0)
		printf("No pertenece\n");
	else
		printf("Si pertenece\n");

	return 0;	
}