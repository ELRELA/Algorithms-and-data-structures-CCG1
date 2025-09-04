#include <stdio.h>

void Imprimir(int *a, int *b, int *c){
	
	//se ordena segun la posicion y se hace que el valor mayor se pase rotando hasta llegar al extremo derecho. y finalmente termina con la condicion de los primeros numeros para 
	//mandar el menos al extremo izquierdo, cumpliendo als condiciones de A SEA EL MENOR Y C EL MAYOR. 
	
	if(*a>*b){
		int temp = *b;
		*b=*a;
		*a=temp;
	}
	if(*b>*c){
		int temp=*c;
		*c=*b;
		*b=temp;
	}
	if(*a>*b){
		int temp= *a;
		*a=*b;
		*b=temp;
	}
	
	printf(" A: %i, B: %i, C: %i",*a,*b,*c);	
}
	


int main(){
	
	int A,B,C;
	
	printf("Ingrese 3 numeros \n");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	Imprimir(&A,&B,&C);
	
	return 0;
}
