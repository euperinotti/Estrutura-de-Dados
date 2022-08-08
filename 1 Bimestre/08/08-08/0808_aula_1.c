#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x = 2, y = 3, i;
    int num[10] = {3,4,6,2,1,6,8,2,9,5};
    int somaValores = 0, somaPosi = 0;

    num[x] = num[x * y]; // Posicao 2 -> valor 8
    num[num[x]] = num[x + y]; // Posicao 6 -> valor 8
    num[y+1] = x + y; // Posicao 4 -> valor 5
    num[y - x] = num[num[y]]; // Posicao 1 -> valor 8
    num[y] = num[y] + num[x]; // Posicao 3 -> valor 10
    num[x - 2] = num[y] + x; // Posicao 0 -> valor 12

    // [12, 8, 8, 10, 5, 6, 8, 2, 6, 5];

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            somaPosi += num[i];
        }

        if(num[i] % 2 == 0){
            somaValores += num[i];
        }
    }

    printf("a) A soma dos valores de indice par...: %i \n", somaPosi);
    printf("b) A soma dos valores pares...: %i \n", somaValores);

}