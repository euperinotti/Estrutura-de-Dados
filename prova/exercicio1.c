// escreva um programa que leia uma matriz 3x3 e calcule a media dos valores impares por linha.
// Essa media deve ser armazenada em um vetor de 3 linhas

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main() {

    int vetor[length][length] = {{6,6,3}, {8,8,1}, {3,3,4}};
    int result[length][1] = {{0},{0},{0}};
    int i, j, qntd, media;

    printf("Aluno: Guilherme Perinotti \n");
    printf("Turma: Engenharia de Software - C \n");

    for(i = 0; i < length; i++){
        qntd = 0;
        media = 0;
        for(j = 0; j < length; j++){
            if(vetor[i][j] % 2 != 0){
                qntd++;
                media += vetor[i][j];
            }
            printf("%d - ", vetor[i][j]);
        }

        result[i][1] = (media /= qntd);
        printf("Media: %d \n", result[i][1]);
    }


}