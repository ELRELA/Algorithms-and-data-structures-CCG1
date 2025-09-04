#include <stdio.h>
#include <limits.h>


int funcion(int a, int b, int *sum, int *mult){
	
	int  suma=a+b;
	int multi= a*b;
	
	*sum=suma;
	*mult=multi;
	
	if(a==b){
		return 1;
	}
	if(a!=b){
		return 0;
	}
	if(INT_MIN >suma ||  suma>INT_MAX || INT_MIN>multi || multi>INT_MAX ){
		return -1;
	}
}



int main(){
	//paso por referencia *, paso por valor sin nada en los parametros!!
	int a1,a2;
	int multi, sum;
	int condicion;
	printf("Ingrese el primer numero \n");
	scanf("%i",&a1);
	printf("Ingrese el segundo numero \n");
	scanf("%i",&a2);
	printf("\n");
	condicion=funcion(a1,a2,&sum,&multi);
	switch(condicion){
		case 1: printf("Los numeros %i %i son iguales \n",a1,a2);
				printf(" Suma %d, Multiplicacion %d \n", sum,multi);
				break;
		case 0: printf("Los numeros %i %i son diferentes \n",a1,a2);
				printf(" Suma %d, Multiplicacion %d \n", sum,multi);
				break;
		case -1: printf("Los la suma o multiplicacion de los numeros %i %i se desbordan !! \n",a1,a2);
				break;
				
	}
	return 0;
}
