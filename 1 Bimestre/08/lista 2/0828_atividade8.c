// 8). Faça um programa que monte uma matriz 3x3 de números inteiros, calcule e
// mostre a média dos elementos das linhas pares da matriz.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main(){
    int matriz[length][length];
    float media = 0;
    int i, j;

    for(i = 0; i < length; i++){
        printf("----Linha %i\n", i);
        for(j = 0; j < length; j++){
            printf("Informe um numero...: ");
            scanf("%i", &matriz[i][j]);
            if(i % 2 == 0){
                media += matriz[i][j];
            }
        }
    }

    media /= 2;
    printf("\nMedia %i: %.2f\n", i, media);
}