#include<stdio.h>
#include <math.h> 
int main(){
	float Ax,Ay,Az;
	float Bx,By,Bz;
	float dist;
	//Ingresar Valores del Punto A
	printf("Ingrese los valores de A(x,y,z)\n");
	printf("El valor del eje x del punto A\n");
	scanf("%f",&Ax);
	printf("El valor del eje y del punto A\n");
	scanf("%f",&Ay);
	printf("El valor del eje z del punto A\n");
	scanf("%f",&Az);
	//Ingresar Valores del Punto B
	printf("El valor del eje x del punto B\n");
	scanf("%f",&Bx);
	printf("El valor del eje y del punto B\n");
	scanf("%f",&By);
	printf("El valor del eje z del punto B\n");
	scanf("%f",&Bz);
	//Calculando la distancia entre los puntos A Y B
	dist=sqrt(pow(Bx-Ax,2)+pow(By-Ay,2)+pow(Bz-Az,2));
	//Imprimiendo la distancia
	printf("La distancia de los puntos A y B es %f",dist);
	return 0;
	
}
