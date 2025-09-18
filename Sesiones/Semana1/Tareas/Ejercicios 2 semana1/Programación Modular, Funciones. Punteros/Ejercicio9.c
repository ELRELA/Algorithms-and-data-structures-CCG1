#include <stdio.h>

int calcularSuma(int numero) {
    int i,suma = 0, multiplicador = 2;
    for(i = 0; i < 5; i++) {
        int digito = numero % 10;
        suma += digito * multiplicador;
        numero /= 10;
        //utilize el operador ternario para hacer la condicion , en vez de usar ifelse, el (? significa entonces) y  (: significa sino)
        multiplicador = (multiplicador == 7) ? 2 : multiplicador + 1;
    }
    return suma;
}

int calcularResiduo(int suma) {
    return suma % 11;
}

int calcularDigitoVerificador(int residuo) {
    if(residuo == 0 || residuo == 1) {
        return residuo;
    } else {
        return 11 - residuo;
    }
}

int main() {
    int numero;
    printf("Introduce un numero de 5 cifras: ");
    scanf("%d", &numero);
    
    int suma = calcularSuma(numero);
    int residuo = calcularResiduo(suma);
    int digitoVerificador = calcularDigitoVerificador(residuo);
    
    printf("El digito verificador es: %d\n", digitoVerificador);
    
    return 0;
}

