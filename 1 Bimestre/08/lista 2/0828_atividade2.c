// 2) Definir um algoritmo que cadastre o código, o produto e o preço de 5 produtos de
// uma mercearia. Imprima a tabela de códigos e descrição dos produtos cujo o valor é
// inferior a R$ 10,00.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define length 5

int main(){
    char nome[length][100];
    int codigo[length];
    float preco[length];
    int i;

    for(i = 0; i < length; i++){
        printf("Informe o codigo do produto...: ");
        scanf("%i", &codigo[i]);

        printf("\nInforme o nome do produto...: ");
        scanf("%s", &nome[i]);

        printf("\nInforme o preco do produto...: ");
        scanf("%f", &preco[i]);
        printf("\n-----------------");
    }

    for(i = 0; i < length; i++){
        if(preco[i] < 10.00){
            printf("\nCodigo: %i \nNome: %s \nValor: %.2f \n-----------", codigo[i], nome[i], preco[i]);
        }
    }  



   // printf("\nCodigo: %i \nNome: %s \nValor: %.2f", codigo[0], nome[0], preco[0]);
}