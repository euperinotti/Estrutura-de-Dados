/* 10) Em uma cidade havia um total de 5 eleitores (todos foram votar). Havia três opções
de candidato, o candidato número 11, o número 22 e o número 33. Além desses
candidatos, também havia a possibilidade de votar em branco que correspondia ao
número 0 (zero), ou o voto nulo que correspondia a qualquer outro número diferente
de 0, 11, 22 e 33. 

O objetivo do algoritmo é ler o voto de todos os eleitores da cidade,
e calcular qual o total e a porcentagem de votos de cada um dos candidatos. O
programa também deve calcular o total e a porcentagem de votos brancos ou nulos.
No final o exercício deve imprimir todos esses cálculos. (DO WHILE). */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 5

int main() {
    int votos[length] = {0,0,0,0,0}; 
    int i = 0, opcao = 0;
    float porcentagem[length] = {0,0,0,0,0};

    do{
        printf("-----Informe seu canditado----\n");
        printf("[11] Candidato 1\n");
        printf("[22] Candidato 2\n");
        printf("[33] Candidato 3\n");
        printf("[0] Em Branco\n");
        printf("[Outros] Votar Nulo\n");
        printf("Escolha...: ");
        scanf("%i", &opcao);

        switch(opcao){
            case 11:
                votos[0]++;
                break;

            case 22:
                votos[1]++;
                break;
            
            case 33:
                votos[2]++;
                break;
            
            case 0:
                votos[3]++;
                break;
            
            default:
                votos[4]++;
                break;
        }

        i++;
    } while(i < length);

    for(i = 0; i < length; i++){
        porcentagem[i] = ((float)votos[i]/length) * 100;
        switch(i){
            case 0:
                printf("O candidato %i teve %i votos, %.2f%% \n", 11, votos[i], porcentagem[i]);
                break;

            case 1:
                printf("O candidato %i teve %i votos, %.2f%% \n", 22, votos[i], porcentagem[i]);
                break;
            
            case 2:
                printf("O candidato %i teve %i votos, %.2f%% \n", 33, votos[i], porcentagem[i]);
                break;
            
            case 3:
                printf("%i votos em branco, %.2f%% \n", votos[i], porcentagem[i]);
                break;
            
            default:
                printf("%i votos nulo, %.2f%% \n", votos[i], porcentagem[i]);
                break;
        }
    }
}