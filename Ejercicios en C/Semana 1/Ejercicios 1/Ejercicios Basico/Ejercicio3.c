#include<stdio.h>
#include<math.h>
int main(){
	char n_producto[30];
	int cantidad;
	double precio;
	//Ingresando Valores
	printf("Porfavor Ingrese el nombre del producto \n");
	scanf("%s",n_producto);
	printf("Porfavor Ingrese el precio \n");
	scanf("%lf",&precio);
	printf("Porfavor ingrese la cantidad \n");
	scanf("%i",&cantidad);
	//Procesamiento de los valores
	if(cantidad<=10){
		double total=precio*cantidad;
		printf("El Total a pagar del producto %s es %lf",n_producto,total);
	}
	else if(cantidad<=20){
		float descuento=0.10;
		double total=precio*cantidad-(descuento*(precio*cantidad));
		printf("El Total a pagar del producto %s es %lf",n_producto,total);
	}
	else if(cantidad<=50){
		float descuento=0.20;
		double total=precio*cantidad-(descuento*(precio*cantidad));
		printf("El Total a pagar del producto %s es %lf",n_producto,total);
	}
	else{
		float descuento=0.25;
		double total=precio*cantidad-(descuento*(precio*cantidad));
		printf("El Total a pagar del producto %s es %lf",n_producto,total);
		}	
	
}
