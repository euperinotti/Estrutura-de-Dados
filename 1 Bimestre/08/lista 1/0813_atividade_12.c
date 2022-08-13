/* 12) Elaborar um algoritmo que calcule o fatorial de um número N digitado pelo usuário.
Lembrando que não existe fatorial de valor negativo, e por padrão fatorial de 0 é
1. (FOR) */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n = 0, i, res = 1;

    printf("Informe um numero...: ");
    scanf("%i", &n);

    if(n < 0){
        printf("\n Nao é possivel fazer fatorial de um numero negativo");
    } else {
        for(i = n; i > 0; i--){
            res *= i; 
        }
        printf("%i", res);
    }
}