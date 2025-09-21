#include "circunferencia_lab.h"
#include <stdio.h>
#include <math.h>

Punto create_point(double x, double y){
	Punto temp;
	temp.x=x;
	temp.y=y;

	return temp;
}

Circun create_circunfenrencia(Punto centro,  double r){
	Circun temp;
	temp.centro=centro;
	temp.radio=r;

	return temp;
}

int verificar_pertenencia(Circun c, Punto p){
	double val = (c.centro.x-p.x)*(c.centro.x-p.x) + (c.centro.y-p.y)*(c.centro.y-p.y);
	if(val<=c.radio*c.radio)
		return 1;

	return 0;
}