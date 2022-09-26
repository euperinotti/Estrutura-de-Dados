#include <stdio.h>  
#include <stdlib.h>
#include <stdbool.h>
#define length 6

// Função para verificar se o aray esta ordenado
bool isSorted(int *a) {
    int i;
    // Laço que ira verificar a ordenação dos itens
    for (i = 1; i < length; i++) {
        
        // Se a posição anterior for maior que a posterior
        // o laço retorna falso

        if (a[i - 1] > a[i]) {
            return false;
        }

    }

    // É usado o while quando o array vai ser definido pelo usuario
    // while ( --n >= 1 ) {

    //     if ( a[n] < a[n-1] ){
    //         return false;
    //     } 
        
    // }

    // Se o laço for executado sem problemas
    // a funcao retorna true

    return true;

}

// Funcao para aleatorizar o array  
void shuffle(int *a) {

    int i, temp, random;

    for(i = 0; i < length; i++) {

        // exemplo -> i = 3

        temp = a[i]; // temp = 7
        random = rand() % length; // random = 4
        a[i] = a[random]; // a[3] = 3(a[random])
        a[random] = temp; // a[random] = 7

    }
}
 
// Funcao para executar o bogosort
void bogosort(int *a){

    // Enquanto a funcao isSorted retornar falso,
    // a funcao shuffle vai ser executada

    while (!isSorted(a)){

        shuffle(a);

    }
}
 
int main(){

    int x[] = {1, 10, 9, 7, 3, 0};
    int i;

    // Para pegar o comprimento do array -> int len = sizeof(x)/sizeof(x[0]);

    printf("Array Original:\n");
    for (i = 0; i < length; i++){
        printf("%d ", x[i]);  
    }

    printf("\nArray Organizado:\n");

    bogosort(x);

    for (i = 0; i < length; i++){
        printf("%d ", x[i]);
    }
}