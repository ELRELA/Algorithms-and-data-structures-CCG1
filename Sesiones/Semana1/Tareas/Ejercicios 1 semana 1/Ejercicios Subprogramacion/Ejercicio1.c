#include <stdio.h>


double promedioNotas(int cant){
 	double nota,sum_notas,promedio;
 	int i;
	for(i=1; i<=cant; i++){
		do{
		scanf("%lf",&nota);
		if(nota<1 || nota>10){
			printf("Introduzca una nota entre el 1 al 10 \n");
		}
		else
			sum_notas+=nota;
		}
		while(nota<1 || nota>10);
	}
	promedio=sum_notas/cant;
	return promedio;
		
}

void estadoAlumno(double pNotas){
	if(pNotas<4){
		printf("Situacion: Reprobado");
	}
	else if(pNotas<=6){
		printf("Situacion: Verificacion Suplementaria");
	}
	else{
		printf("Situacion: Aprobado");
	}
	
}



int main(){
	
	int cant;
	double p_not;
	
	scanf("%i",&cant);
	p_not=promedioNotas(cant);
	printf("El promedio de notas es : %.2lf \n",p_not);
	estadoAlumno(p_not);
	
	
	
	return 0;
}
