#include <stdio.h>

int main() {
    int vehiculo, reg, zona;
    float velocidad, limite_velocidad, multa;
    int total_infracciones_zona1 = 0, total_infracciones_zona2 = 0, total_infracciones_zona3 = 0;
    double total_multa_zona1 = 0.0, total_multa_zona2 = 0.0, total_multa_zona3 = 0.0;
    int num_infracciones;

    printf("Ingrese el numero de infracciones: ");
    scanf("%d", &num_infracciones);

    for (vehiculo = 1; vehiculo <= num_infracciones; vehiculo++) {
        printf("\nVehiculo %d:\n", vehiculo);
        printf("Numero de placa (registro): ");
        scanf("%d", &reg);

        printf("Zona (1, 2, 3): ");
        scanf("%d", &zona);
        
        printf("Limite de velocidad en km/h: ");
        scanf("%f", &limite_velocidad);
        
        printf("Velocidad registrada en km/h: ");
        scanf("%f", &velocidad);

        
        if (velocidad > limite_velocidad) {
            multa = (velocidad - limite_velocidad) * 3.00;
		}
				 
            if (zona == 1) {
                total_infracciones_zona1++;
                total_multa_zona1 += multa;
            } else if (zona == 2) {
                total_infracciones_zona2++;
                total_multa_zona2 += multa;
            } else if (zona == 3) {
                total_infracciones_zona3++;
                total_multa_zona3 += multa;
            }
            
    	printf("\nINFRACCIONES A LOS LIMITES DE VELOCIDAD\n");        
        printf("VEHICULO \t REG \t\t\t\t VELOCIDAD \t\t\t\t MULTA \n");
		printf("%i \t\t %i \t\t\t\t %lf \t\t\t %lf\n",vehiculo,reg,velocidad,multa);    
        
    }


    printf("\nZONA 1:\n");
    printf("TOTAL DE INFRACCIONES: %d\n", total_infracciones_zona1);
    printf("MONTO RECAUDADO EN MULTAS: %.2f\n", total_multa_zona1);
    
    printf("ZONA 2:\n");
    printf("TOTAL DE INFRACCIONES: %d\n", total_infracciones_zona2);
    printf("MONTO RECAUDADO EN MULTAS: %.2f\n", total_multa_zona2);
    
    printf("ZONA 3:\n");
    printf("TOTAL DE INFRACCIONES: %d\n", total_infracciones_zona3);
    printf("MONTO RECAUDADO EN MULTAS: %.2f\n", total_multa_zona3);

    return 0;
}

