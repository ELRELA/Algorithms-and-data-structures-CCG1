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

	int main() {
    int primos[10];  
    int i = 2, contador = 0;

    while (contador < 10) {
        if (verPrimo(i)==true) {
            primos[contador] = i;  
            contador++;
        } 
        i++;
    }

    printf("Tabla de los 10 primeros numeros primos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", primos[i]);
    }
    printf("\n");
    
    return 0;
}

