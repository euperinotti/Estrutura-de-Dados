// 3) Definir um algoritmo que leia vetor A e B e gere um C, todos com 6 elementos.
// (Vetor)
// a. As posições pares de C são os elementos das posições pares de A;
// b. As posições impares de C são os elementos das posições impares de B;

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 6

int main(){
    int matrizA[length] = {2,4,6,8,10,12};
    int matrizB[length] = {5,10,15,20,25,30};
    int matrizC[length], i;

    for(i = 0; i < length; i++){
        if(i % 2 == 0){
            matrizC[i] = matrizA[i];
        } else {
            matrizC[i] = matrizB[i];
        }

        printf(" %i -", matrizC[i]);
    }

}