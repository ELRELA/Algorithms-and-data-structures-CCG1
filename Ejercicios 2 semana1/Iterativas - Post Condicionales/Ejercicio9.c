#include <stdio.h>
#include <string.h>

int main() {
    int i,j,cantidad_alumnos, cantidad_cursos;
    float calificacion1, calificacion2, calificacion3, calificacion_final, promedio_alumno, total_promedio = 0;
    char nombre[100][50], curso[100][50], observacion[100][50];
    
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantidad_alumnos);
    
    
    for (i = 0; i < cantidad_alumnos; i++) {
        printf("\nIngrese el nombre del alumno %d: ", i + 1);
        scanf("%s", nombre[i]);
        
        printf("Ingrese la cantidad de cursos que cursa %s: ", nombre[i]);
        scanf("%d", &cantidad_cursos);
        
        float promedio_alumno_total = 0;
        
        for (j = 0; j < cantidad_cursos; j++) {
            printf("\nIngrese el nombre del curso %d para el alumno %s: ", j + 1, nombre[i]);
            scanf(" %s", curso[j]);
            
            printf("Ingrese la calificacion 1 para el curso %s: ", curso[j]);
            scanf("%f", &calificacion1);
            printf("Ingrese la calificacion 2 para el curso %s: ", curso[j]);
            scanf("%f", &calificacion2);
            printf("Ingrese la calificacion 3 para el curso %s: ", curso[j]);
            scanf("%f", &calificacion3);
            
          
            calificacion_final = (calificacion1 + calificacion2 + calificacion3) / 3;
            
            //utilizamos strcpy para transquibir las observacion en el arreglo de cadena ob
            if (calificacion_final >= 10) {
                strcpy(observacion[j], "APROBADO");
            } else {
                strcpy(observacion[j], "DESAPROBADO");
            }

           
            printf("\nReporte de Curso:\n");
            printf("NOMBRE: %s\n", nombre[i]);
            printf("CURSO: %s\n", curso[j]);
            printf("CALIF. FINAL: %.2f\n", calificacion_final);
            printf("OBSERVACION: %s\n", observacion[j]);
            
            promedio_alumno_total += calificacion_final;  
        }
        
        
        promedio_alumno = promedio_alumno_total / cantidad_cursos;
        printf("\nPromedio del alumno %s: %.2f\n", nombre[i], promedio_alumno);
        
        
        total_promedio += promedio_alumno;
    }
    
    
    printf("\nTOTAL GENERAL\n");
    printf("TOTAL ALUMNO: %d\n", cantidad_alumnos);
    printf("PROMEDIO GENERAL: %.2f\n", total_promedio / cantidad_alumnos);
    
    return 0;
}

