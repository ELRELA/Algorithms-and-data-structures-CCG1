#include <stdio.h>
#include <stdbool.h>

bool verPrimo(int n){
	int i;
	
	if(n<=1){
		return false;
	}
	else{
		
	int cont=0;
	for(i=1; i<=n; i++){
		if(n%i==0){
			cont++;
		}
	}
	
	if(cont==2){
		return true;
	}
	else return false;
	
	}
	
}

int mini(int n){
	int i;
	for(i=2; i<=n; i++){
		if(n%i==0){
			return i;
		}
	}
	
	
}

int maxi(int n){
	int i;
	for(i=n-1; i>=2; i--){
		if(n%i==0){
			return i;
		}
	}
	
}



int DIVS(int n, int *max, int *min){
	
	if(verPrimo(n)==true){
		return 0;
	}
	else{
		*max=maxi(n);
		*min=mini(n);
		return 1;
	}
	
	
	
	
}




int main(){
	int numero=4;
	int max;
	int min;
	DIVS(numero, &min, &max);
	printf("numero: %d, \n max div: %d \n min div: %d", numero,max,min);
	return 0;
}
