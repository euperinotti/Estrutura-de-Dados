
/* 1. Fazer um algoritmo que leia a nota de 5 alunos, calcule a média entre elas e
imprima a diferença entre cada nota e a média. Gerando um novo vetor com
essa resposta de cálculo. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int notas[5], i = 0, soma = 0;
    int diferenca[5];
    float media = 0;

    while (i < 5){
        printf("Insira o valor da nota %i...: ", i);
        scanf("%i", &notas[i]);
        soma += notas[i];
        i++;
    }

    media = soma/5;
    i = 0;
    printf("A media é...: %.2f", media);

    while(i < 5){
        diferenca[i] = media - notas[i];
        printf("A diferenca da nota %i com a media %.2f...: %i\n", i, media, diferenca[i]);
        i++;
    }
    

}