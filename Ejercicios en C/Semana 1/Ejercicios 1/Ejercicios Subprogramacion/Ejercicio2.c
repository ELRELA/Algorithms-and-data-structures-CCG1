#include <stdio.h>

//el puntero *seg permite modificar la variable seg
void lectura(int *seg){	
//asigna la direccion de memoria de seg	 lo cual modifica la variable
	scanf("%i",seg);
}


void escritura(int seg){
	
	printf("el total de segundos:  %i, equivale al siguiente formato. Horas: %i, Minutos: %i, Segundos: %i", 
	seg,obtencionHoras(seg),obtencionMinutos(seg),obtencionSegundos(seg));


}

int obtencionHoras(int segundos){
	return segundos/3600;
}
int obtencionMinutos(int segundos ){
	return (segundos%3600)/60;
}
int obtencionSegundos(int segundos ){
	return (segundos%3600)%60;
}

int main(){

	int seg;
	//se le asigna al puntero *seg la direccion de memoria del seg que esta dentro del main. 
	//*seg = muestra en pantalla el valor de seg. y cuando se imprime
	//&seg autoasigna el valor de seg dentro de la funcion a la varibla int seg. 
	lectura(&seg);
	escritura(seg);
	
	
	return 0;
}
