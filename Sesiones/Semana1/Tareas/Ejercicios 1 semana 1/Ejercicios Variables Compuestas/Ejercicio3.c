#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int vector[], int tamano) {
    int i, j, temp;
    for(i = 0; i < tamano; i++) {
        for(j = 0; j < tamano- 1; j++) {
            if(vector[j] > vector[j + 1]) {
                
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vector1[50], vector2[50], vector_combinado[100]; 
    int i;

    
    srand(time(NULL));

    
    for(i = 0; i < 50; i++) {
        vector1[i] = rand() % 1000; 
        vector2[i] = rand() % 1000;
    }

   
    ordenar(vector1, 50);
    ordenar(vector2, 50);

    
    for(i = 0; i < 50; i++) {
        vector_combinado[i] = vector1[i];
        vector_combinado[i + 50] = vector2[i];
    }

   
    ordenar(vector_combinado, 100);

    
    printf("Vector combinado y ordenado:\n");
    for(i = 0; i < 100; i++) {
        printf("%i ", vector_combinado[i]);
    }
    printf("\n");

    return 0;
}
