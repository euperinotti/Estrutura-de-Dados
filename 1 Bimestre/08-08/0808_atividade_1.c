
/* 1) Ler um valor referente ao salto em altura, relatado em metros, e converter para pés
e polegadas. Dado (1pé = 12polegadas e 1 metro = 39,37 polegadas). */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float polegada = 39.3701, resultPol = 0, resultPes = 0, altura;
    int pes = 12;

    printf("Informe o valor da altura em metros...: ");
    scanf("%f", &altura);

    resultPes = (altura * polegada) / pes;
    resultPol = (resultPes - (int)resultPes) * pes;

    printf("O resultado é...: %i pes e %.2f pol", (int)resultPes, resultPol);
    
}

// (int) transforma o numero em inteiro