#include<stdio.h>
#include<math.h>
int main(){
	
	int a;
	
	scanf("%i",&a);
	
	int cont=1;
	while(cont<=10){
		printf("%i * %i = %i \n",a,cont,a*cont);
		cont++;
	}

	return 0;
}
