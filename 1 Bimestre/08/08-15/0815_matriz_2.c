// Definir um algoritmo que leia duas matrizes A e B de 3x3 e construa uma C,
// tambem com as mesmas dimensoes, onde seus valores serao os menores na
// comparacao de A e B

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define tam 3

int main(){
    int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[Matriz A]Digite um valor para a posicao %i-%i...: ", i, j);
            scanf("%i", &matrizA[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[Matriz B]Digite um valor para a posicao %i-%i...: ", i, j);
            scanf("%i", &matrizB[i][j]);
        }
    }

    printf("[Matriz C]\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matrizA[i][j] < matrizB[i][j]){
                matrizC[i][j] = matrizA[i][j];
                printf("%i", matrizC[i][j]);
            } else {
                matrizC[i][j] = matrizB[i][j];
                printf("%i", matrizC[i][j]);
            }
        }
        printf("\n");
    }
}