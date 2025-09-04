#include <stdio.h>
#include <stdlib.h>

int main(){
	int *vec;
	int n,i;
	printf("Ingrese el valor de elementos que va a ingresar al vector\n");
	scanf("%d",&n);
	//asigno dinamicamente un vector de N enteros
	vec=(int*)malloc(n*sizeof(int));
	if(vec==NULL){
		printf("Error al asignar memoria\n");
	}
	else{
	printf("Memoria asignada correctamente\n");
	for(i=0; i<n; i++){
		scanf("%d",&vec[i]);
	}
	
	int mayor=0;
	int menor=vec[0];
	float promedio=0;
	for(i=0; i<n; i++){
		//almaceno el mayor entero
		if(vec[i]>mayor){
			mayor=vec[i];
		}
		//almaceno el menor entero
		if(vec[i+1]<menor && i+1<n){
			menor=vec[i+1];
		}
		promedio=promedio+vec[i];
	}
	promedio=(promedio/n);
	
	printf(" Mayor valor : %d, Menor valor: %d, Promedio: %.2f", mayor, menor, promedio);

	}
	
	return 0; 
}
