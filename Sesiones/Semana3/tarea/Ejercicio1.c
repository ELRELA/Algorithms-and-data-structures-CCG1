#include <stdio.h>

int FATORES(int n, int v[], int *x){
	int cant=0, i,j=0;
	for(i=2; n>1; i++){
		while(n%i==0){
			v[j]=i;
			j++;
			cant++;
			n=n/i;
		}
	}
	*x=cant;
	if(cant>10)return 1;
	else return 0;
}


int funcion2(char *a[],char *b[], int n){
	//n=10 para hola mundo
	//* valor 
	//& direccion de mem
	char nombre[10]="Hola Mundo";
	a=nombre; // a la variable a se le asigna la direccion de memoria nombre, pero desde el incicio osea &nome[0]
	while(*a!=' ' || *a='\0'){
		a=a+1; //va paseando a la siguinete posicion de la memoria del arreglo
	}
	
	
}









int main(){
	int vector[100];
	int numero=232792560;
	int puntero;
	//siempre una variable puntero va almacenar la direccion de memoria;
	
	printf("Resultado de factores del numero %d, es: %d \n",numero,FATORES(numero,vector,&puntero));
	printf("El Cantidad de Factores primos es : %i", puntero);
	return 0;
}


