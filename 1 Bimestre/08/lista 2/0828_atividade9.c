// 9). Faça um programa que monte uma matriz 3x3 e mostre:
// A soma dos valores da diagonal principal;
// A soma valores da terceira linha

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main() {
    int matriz[length][length], i, j, somaDiag = 0, soma = 0;

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            printf("Informe um numero...: ");
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            if(i == j){
                somaDiag += matriz[i][j];
            }

            if(i == length - 1){
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma diagonal...: %i\n", somaDiag);
    printf("Soma terceira linha...: %i\n", soma);
}