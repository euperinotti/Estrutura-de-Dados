// verificar se o numero é par ou impar

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor;
    valor = 0;

    printf("Digite o valor de A: ");
    scanf("%i", &valor);

    if (valor % 2 == 0){
        printf("PAR!");
    } else {
        printf("IMPAR!");
    }
    
}