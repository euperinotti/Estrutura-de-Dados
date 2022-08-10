/* 9) Fazer um algoritmo que leia a média bimestral de 5 alunos e mostre a nota mais
alta, a nota mais baixa e média da turma. (DO WHILE). */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define length 5

int main(){
    float notas[length], maiorNota = 0, menorNota = 10, media = 0;
    int i = 0;

    do{
        printf("Digita a nota do aluno %i...: ", i+1);
        scanf("%f", &notas[i]);

        if(notas[i] > maiorNota){
            maiorNota = notas[i];
        }

        if(notas[i] < menorNota){
            menorNota = notas[i];
        }

        printf("-------------------\n");
        printf("O aluno %i tem nota %.2f \n", i+1, notas[i]);
        printf("-------------------\n");

        media += notas[i];
        i++;
    } while (i < length);

    media = media / length;

    printf("Maior nota...: %.2f \n", maiorNota);
    printf("Menor nota...: %.2f \n", menorNota);
    printf("Media da turma...: %.2f \n", media);
    
}