// 1) Em um campeonato de sinuca tenho 3 jogadores que devem jogar entre eles
// partidas de ida e volta, como figura abaixo. Elabore na linguagem C um programa que
// mostre esse chaveamento. (Vetor)

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main() {
    char nomes[length] = {'Maior', 'Ze', 'Luiz'};
    int i = 0;
    char nome;

    while (i < length) {
        nome = nomes[i];
        if(nome == nomes[i]){
            printf("%s", nomes[i]);
        }
        i++;
    }
    
}