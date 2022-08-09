
/* 5) Replicar o exercício acima utilizando a estrutura CASE. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int opcao = 0;
    float valorCompra, desconto = 0;

    printf("Informe o valor total da compra...: ");
    scanf("%f", &valorCompra);

    printf("Qual será a forma de pagamento? \n1) Pagamento à vista: há um desconto de 10%% sobre o valor total da compra;\n");
    printf("2) Pagamento 30 dias direto: há desconto de 5%% sobre o valor total da compra;\n");
    printf("3) Pagamento 60 dias direto: valor da compra sem desconto;\n");
    scanf("%i", &opcao);

    switch(opcao){
        case 1:
            printf("Valor total...: %.2f \n", valorCompra);
            printf("Valor com desconto(10%%)...: %.2f", valorCompra - (valorCompra * 0.10));
            break;

        case 2:
            printf("Valor total...: %.2f \n", valorCompra);
            printf("Valor com desconto(5%%)...: %.2f", valorCompra - (valorCompra * 0.05));
            break;

        case 3:
            printf("Valor total...: %.2f \n", valorCompra);
            printf("Valor sem desconto...: %.2f", valorCompra);
            break;

        default:
            printf("Opcao nao existente");
            break;
    }
}