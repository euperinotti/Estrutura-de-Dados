#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1, s=0;

    // obrigatoriamente o codigo é executado primeiro
    // porque a validação fica abaixo da ação
    // do laço
    do {
        s += i;
        i++;
        printf("%i -> ", s);
    } while(i <= 3);

    printf("Resultado: %i", s);
}