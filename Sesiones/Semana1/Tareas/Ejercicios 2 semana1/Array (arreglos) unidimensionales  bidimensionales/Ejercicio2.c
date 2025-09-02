#include <stdio.h>

int es_simetrico(int vector[], int n) {
	int i;
    for(i = 0; i < n / 2; i++) {
        if(vector[i] != vector[n-i-1]) {
            return 0;  
        }
    }
    return 1;
}

int main() {
    int n,i;

    printf("Ingrese el tamano del vector: ");
    scanf("%d", &n);

    int vector[n];
    printf("Ingrese los elementos del vector: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    if(es_simetrico(vector, n)==1) {
        printf("El vector es simétrico.\n");
    } 
	if(es_simetrico(vector,n)==0) {
        printf("El vector no es simétrico.\n");
    }

    return 0;
}

