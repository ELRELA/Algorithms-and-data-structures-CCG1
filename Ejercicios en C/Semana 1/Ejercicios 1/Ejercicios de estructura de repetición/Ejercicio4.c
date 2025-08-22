#include <stdio.h>
#include <math.h>

int main(){
	
	double inversion;
	int cont=1;
	char opc='Y';
	int anio=1;
	
	scanf("%lf",&inversion);
	double tasa=inversion*0.01;
	
	do{
	while(cont<=12){
		inversion+=tasa;
		cont++;
	}
	cont=0;
	printf("Saldo tras %i ano: %lf \n",anio,inversion);
	printf("Desea Procesar un anio mas? S/N \n");
	scanf(" %c",&opc);
	if(opc=='S'){
		anio++;
	}
	}while(opc=='S');

	
	
	return 0;
}
