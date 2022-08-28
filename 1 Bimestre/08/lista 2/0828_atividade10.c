// 10). Faça um programa que carregue uma matriz 3x3, calcule e mostre a quantidade
// de elementos pares, a soma dos elementos ímpares e a média de todos os elementos.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main(){
    int matriz[length][length], i, j, pares = 0, impar = 0;
    float mediaTotal = 0;

    for (i = 0; i < length; i++) {
        for (j = 0; j < length; j++) {
            printf("[%i-%i]Informe um numero...: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0){
                pares += 1;
            } else {
                impar += matriz[i][j];
            }
            mediaTotal += matriz[i][j];
        }
    }

    printf("\nElementos pares...: %i\n", pares);
    printf("Soma de elementos impares...: %i\n", impar);
    printf("Media total...: %.2f\n", mediaTotal);
}