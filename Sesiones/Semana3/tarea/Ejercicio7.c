#include <stdio.h>

	void CALCULA(int *a, int *b){
		int temp=*a;
		*a=*a+*b;
		*b=temp-*b;
		printf("%d y %d\n", *a,*b);
	}
	



int main(){
	int a,b;
	printf("Ingrese los numeros a y b\n");
	scanf("%d", &a);
	scanf("%d",&b);
	CALCULA(&a,&b);
	printf("(X) suma de a y b : %d, (Y) resta de a y b: %d \n",a,b);
	
	//Pregunta: ¿el paso de parámetros a la función debe hacerse por valor o por referencia?
//	Debe hacerse por referencia para que los parametros cambien de valor dentro de la funcion. 
	
	
	
	
	
	return 0;
}
