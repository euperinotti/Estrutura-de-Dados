
/* Dados três valores, X, Y, Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo e, se forem verificar se é um triângulo equilátero, isósceles ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.

OBS.: Antes de começar a elaboração do algoritmo, torna-se necessário a revisão
de algumas propriedades e definições.

a. O comprimento de cada lado de um triângulo é menor do que a soma dos
comprimentos dos outros dois lados.
b. Chama-se triângulo equilátero ao triângulo que tem os comprimentos dos
três lados iguais.
c. Chama-se triângulo isósceles ao triângulo que tem os comprimentos de
dois lados iguais. Portanto, todo triângulo equilátero é também isósceles.
d. Chama-se triângulo escaleno ao triângulo que tem os comprimentos de
seus três lados diferentes. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int ladoA = 0, ladoB = 0, ladoC = 0;

    printf("Informe o valor do lado A...: ");
    scanf("%i", &ladoA);

    printf("Informe o valor do lado B...: ");
    scanf("%i", &ladoB);

    printf("Informe o valor do lado C...: ");
    scanf("%i", &ladoC);

    if(ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoB + ladoA)){
        if(ladoA == ladoB && ladoA == ladoC){
            printf("\n O triangulo é equilátero");
        } else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
            printf("\n O triangulo é isoceles");
        } else {
            printf("\n O triangulo é escaleno");
        }
    }

}