
/* 8) Faça um algoritmo que leia 3 valores (N , limite inferior, limite superior) e mostre
todos os números múltiplos de N entre os dois limites lidos. (WHILE). */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0, limiteInf = 0, limiteSup = 0, i = 0;

    printf("Informe o valor inicial...: ");
    scanf("%i", &n);

    printf("Informe o limite inferior...: ");
    scanf("%i", &limiteInf);
    printf("Informe o limite superior...: ");
    scanf("%i", &limiteSup);


    while (i < (limiteSup - limiteInf)){
        printf("Comecou----------\n");
        if(n % limiteInf == 0){
            printf("%i e multiplo de %i \n", limiteInf, n);
        }
        limiteInf += 1;
        i++;
    }
    

}
