#include <stdio.h>

int main(){
    int seg;
    
    
    printf("Ingrese el total de segundos: ");
    scanf("%i", &seg);
    
  
    int horas = seg / 3600;
    int minutos = (seg % 3600) / 60;
    int segundos = (seg % 3600) % 60;
    
   
    printf("El total de segundos: %i, equivale al siguiente formato.\n", seg);
    printf("Horas: %i, Minutos: %i, Segundos: %i\n", horas, minutos, segundos);
    
    return 0;
}

