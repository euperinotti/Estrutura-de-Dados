// 6) Escreva um algoritmo que leia uma matriz 3x3 e calcule a média dos valores por
// linha. Essa média deve ser armazenada em um vetor de 3 linhas. (Matriz e Vetor)

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main() {
    float matriz[length][length], media[length];
    int i, j;

    for(i = 0; i < length; i++){
        printf("----Linha %i----\n", i+1);
        for(j = 0; j < length; j++){
            printf("Informe a nota %i...: ", j+1);
            scanf("%f", &matriz[i][j]);

            media[i] += matriz[i][j];
        }
        media[i] /= length;
        printf("Media %i: %.2f \n", i+1, media[i]);
    }
}