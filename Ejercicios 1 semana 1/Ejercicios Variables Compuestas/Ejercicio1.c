#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int v[100];int aux; int i;
	srand(time(0));
	
	for(i = 0; i < 100; i++) {
        v[i] = rand()%999;  
    }
   
	
	for(i=0; i<100; i++){
		int j;
		for(j=0; j<100; j++){
			if(v[j]>v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
	
	for(i=0; i<100; i++){
		printf("%i,",v[i]);
	}
	
	return 0;
}
