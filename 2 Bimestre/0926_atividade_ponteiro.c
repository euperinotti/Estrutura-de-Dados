// Membros: Guilherme Perinotti, Mateus Fin, Mateus Pfeffer, Andre Mioto

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}

int main(){
    int a = 5;
    int b = 4;
    int *x = &a;
    int *y = &b;

    a = a+b;

    printf("%i \n", soma(a,b));
    printf("a: %i \n", a);
    printf("ponteiro: %i \n", *x);

}