#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, s = 0;

    for(i = 1; i <= 3; i++){
        s += i;
        printf("%i -> ", s);
    }

    printf("Resultado: %i", s);
}