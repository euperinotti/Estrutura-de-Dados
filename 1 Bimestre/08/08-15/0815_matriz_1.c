// Crie um algoritmo que gere e imprima a segiunte matriz

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define tam 4

int main(){
    int matriz[tam][tam], i = 0, j = 0;

    for(i = 0;i < tam; i++){
        for(j = 0; j < tam; j++){
            if(j == i){
                matriz[i][j] = 1;
                printf("%i",matriz[i][j]);
            } else {
                matriz[i][j] = 0;
                printf("%i",matriz[i][j]);
            }
        }
    printf("\n");
    }    
}