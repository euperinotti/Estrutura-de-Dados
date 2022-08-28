// 4) Faça um algoritmo que gere um vetor com 6 posições, mostre a quantidade de
// valores pares no vetor, mostre a soma de conteúdo par e a média dos pares. Faça a
// mesma verificação para os valores impares. (Vetor)

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 6

int main(){
    int vetor[length], pares = 0, i = 0, soma = 0;
    float media;

    while(i < length){
        printf("Insira um valor inteiro...: ");
        scanf("%i", &vetor[i]);
        i++;
    }

    for(i = 0; i < length; i++){
        if(vetor[i] % 2 == 0){
            pares += 1;
            soma += vetor[i];
        }
    }

    media = soma / pares;

    printf("Quantidade de pares: %i\n", pares);
    printf("Soma de pares: %i\n", soma);
    printf("Media de pares: %.2f\n", media);
}