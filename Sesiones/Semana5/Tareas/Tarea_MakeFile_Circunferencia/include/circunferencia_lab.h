#ifndef CIRCUNFERENCIA_LAB_H
#define CIRCUNFERENCIA_LAB_H

typedef struct {
    double x;
    double y;
} Punto;

typedef struct {
    double radio;
    Punto centro;
} Circun;

// Constructores
Punto create_point(double x, double y);
Circun create_circunfenrencia(Punto centro,  double r);


// Operaciones básicas
int verificar_pertenencia(Circun c, Punto px);

#endif