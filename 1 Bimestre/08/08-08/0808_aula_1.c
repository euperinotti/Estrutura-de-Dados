#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x = 1, y = 2, i;
    int num[10] = {9,0,2,2,6,2,1,3,4,2};
    int somaValores = 0, somaPosi = 0;

    num[x+y] = num[x]+1; // Posicao 2 -> valor 8
    num[7] = num[1]+num[2]; // Posicao 6 -> valor 8
    num[num[x]] = num[y]-num[2]+y; // Posicao 4 -> valor 5
    num[x+y] = x*y; // Posicao 1 -> valor 8
    num[3+4] = num[x+y] + 3; // Posicao 3 -> valor 10
    num[x-1] = x+y+2;
    num[num[x]+1] = num[x]+num[y];
    num[num[6]+1] = num[7]+8;
    num[4*2] = num[3]+num[2];
    num[1] = num[4]+num[3];

    // [12, 8, 8, 10, 5, 6, 8, 2, 6, 5];

    for(i = 0; i < 10; i++){
        printf("%d -", num[i]);
    }

    printf("\n-----------\n");

    for(i = 0; i < 10; i++){
        if(i % 2 != 0){
            somaPosi += num[i];
        }

        if(num[i] % 2 != 0){
            somaValores += num[i];
        }
    }

    printf("a) A soma dos valores de indice par...: %i \n", somaPosi);
    printf("b) A soma dos valores pares...: %i \n", somaValores);

}