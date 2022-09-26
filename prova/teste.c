#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i = 0, aux = 0, troca = 1, numero[5]={1,5,1,0,8};

    while(troca == 1){
        troca = 0;
        for(i = 0; i <= 3; i++){
            if(numero[i] > numero[i + 1]){
                troca = 1;
                aux = numero[i];
                numero[i] = numero[i + 1];
                numero[i + 1] = aux;
            }
        }
        printf("\n");
        for(i = 0; i <= 4; i++){
        printf("%d - ", numero[i]);
    }
        
    }
}