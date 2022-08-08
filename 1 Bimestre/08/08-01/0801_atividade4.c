// verificar positivo e negativo

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    x = 0;

    printf("Digite o valor de X: ");
    scanf("%i", &x);

    if(x > 0){
        printf("%i: positivo", x);
    } else if(x < 0){
        printf("%i: negativo", x);
    } else{
        printf("%i: neutro", x);
    }
}