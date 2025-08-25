#include <stdio.h>
#include<math.h>

int main(){
	int aux,num;
	int post=1,pre=0;
	int cont=1;
	
	scanf("%i",&num);
	
	printf("0,1,");
	while(cont<num){
		aux=post;
		post=post+pre;
		if(cont+1>=num){
			printf("%i.",post);
		}
		else printf("%i,",post);
		pre=aux;
		cont++;
	}
	
}
