// 1) Em um campeonato de sinuca tenho 3 jogadores que devem jogar entre eles
// partidas de ida e volta, como figura abaixo. Elabore na linguagem C um programa que
// mostre esse chaveamento. (Vetor)

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 3

int main() {

    char nomes[length][10] = {{"Maior"},{"Ze"},{"Luiz"}};
    int i, j;

    for(j = 0; j < length; j++){
        for (i = 0; i < length; i++){
            if(nomes[j] != nomes[i]){
                printf("%s x %s \n", nomes[j], nomes[i]);
            }
        }
    }
}