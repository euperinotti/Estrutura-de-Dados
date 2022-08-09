
/* 7) Fazer um algoritmo que leia um conjunto de números e mostre o maior lido entre
eles, onde a condição de parada é quando o usuário entrar com –1. (WHILE). */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int valorA = 0, maior = 0;

    while (valorA != -1){
        printf("Digite um valor...: ");
        scanf("%i", &valorA);
        if(valorA > maior){
            maior = valorA;
        }
    }

    printf("O maior valor informado e...: %i", maior);
    
}