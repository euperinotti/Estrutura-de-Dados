// calcular hipotenusa

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float catA, catO, hip;
    hip = 0; // limpar variavel de calculo

    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &catO);
    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &catA);

    // a funcao pow() é usada para exponenciacao e
    // recebe dois parametros
    // 1º: variavel ou valor da base
    // 2º: valor do expoente

    hip = sqrt(pow(catA, 2) + pow(catO, 2));
    printf("\nA hipotenusa: %0.2f", hip);
    getch();
}