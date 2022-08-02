#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1, s=0;

    while(i <= 3){
        s += i;
        i++;
        printf("%i -> ", s);
    }

    printf("Resultado: %i", s);
}