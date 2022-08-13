/* 11) Elaborar um algoritmo que faça a tabuada inserida pelo usuário até 10.(FOR) */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n = 0, i;
    printf("Informe um numero para a tabuada...: ");
    scanf("%i", &n);

    for(i = 1; i <= 10; i++){
        printf("%i x %i = %i \n", n, i, (n * i));
    }
}