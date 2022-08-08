
/* 2) Fazer um algoritmo que leia três valores inteiros, determine e imprima o menor
deles. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro valor...: ");
    scanf("%i", &num1);
    printf("Digite o segundo valor...: ");
    scanf("%i", &num2);
    printf("Digite o terceiro valor...: ");
    scanf("%i", &num3);

    if(num1 < num2 && num1 < num3){
        printf("O numero %i é menor", num1);
    }else if(num2 < num1 && num2 < num3){
        printf("O numero %i é menor", num2);
    } else {
        printf("O numero %i é menor", num3);
    }
}