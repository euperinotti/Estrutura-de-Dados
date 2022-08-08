#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // 9. Escreva um algoritmo que imprima todas as possibilidades
    // de que no lançamento de dois dados tenhamos o valor de 7 como
    // resultado da soma dos valores de cada lado.

    int i, j;

    for(i = 1; i <= 6; i++){
        for(j = 1; j <= 6; j++){
            if(i + j == 7){
                printf("%i,%i\n", i, j);
            }
        }
    }
}