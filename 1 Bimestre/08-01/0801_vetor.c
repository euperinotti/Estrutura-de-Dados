#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[4];
    int s = 0, i;

    for(i = 0; i < 4; i++){

        printf("Informe os valores: ");
        scanf("%d", &a[i]);

        if(i % 2 == 1){
            s += a[i];
        }
        printf("A soma dos valores de posicao impar %d\n", s);
    }
    getch();
    
}