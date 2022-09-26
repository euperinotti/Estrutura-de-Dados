// faca um programa que monte uma matriz 3x3 e mostre
// a) a media dos valores da diagonal
// b) a soma dos valores da terceira coluna
// c) a soma dos valores pares da segunda coluna

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int mediaDiagonal(int arr[length][length]){
    int i, j, media = 0, qntd = 0;

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            if(i == j){
                qntd++;
                media += arr[i][j];
            }
        }
    }

    media /= qntd;
    return media;
}

int terceiraColuna(int arr[length][length]){
    int i, j, soma = 0;

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            if(j == length -1){
                soma += arr[i][j];
            }
        }
    }

    return soma;
}

int segundaColuna(int arr[length][length]){
    int i, j, soma2 = 0;

    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            if(j != 0 && j % 2 != 0 && arr[i][j] % 2 == 0){
                soma2 += arr[i][j];
            }
        }
    }

    return soma2;
}

int main(){

    int vetor[length][length] = {{6,6,3}, {8,8,1}, {2,3,1}};
    int result[length][1] = {{0},{0},{0}};
    int i;

    printf("Aluno: Guilherme Perinotti \n");
    printf("Turma: Engenharia de Software - C \n");

    result[0][1] = mediaDiagonal(vetor);
    result[1][1] = terceiraColuna(vetor);
    result[2][1] = segundaColuna(vetor);

    for(i = 0; i < length; i++){
        printf("Resultado: %d \n", result[i][1]);
    }
    

}