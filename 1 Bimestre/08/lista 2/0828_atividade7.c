// 7). Faça um programa que monte uma matriz 3x3 com números inteiros, calcule e
// mostre. A quantidade de elementos entre 12 e 20 em cada linha. A média dos
// elementos pares da matriz.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main(){
    int matriz[length][length], elementos = 0, pares = 0;
    float media = 0;
    int i, j;

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            printf("Insira um valor...: ");
            scanf("%i", &matriz[i][j]);

            if(matriz[i][j] > 12 && matriz[i][j] < 20){
                elementos += 1;
            }

            if(matriz[i][j] % 2 == 0){
                pares += 1;
                media += matriz[i][j];
            }
        }
        printf("\nLinha %i \n", i+1);
        printf("Quantidade de elementos entre 12 e 20...: %i\n", elementos);
        elementos = 0;
    }
    media = media/pares;
    printf("Media dos elementos pares...: %.2f", media);
}