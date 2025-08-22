#include <stdio.h>
#include <math.h>
int main(){
	
	int digito;
	int contador=0;
	scanf("%i",&digito);
	
	while(digito!=0){
		digito=digito/10;
		contador++;
	}
	
	printf("%i",contador);
	
	
	
	return 0;
}
