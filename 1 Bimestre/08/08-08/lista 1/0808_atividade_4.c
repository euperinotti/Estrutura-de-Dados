
/* 4) Crie um algoritmo para efetuar o pagamento de uma compra em uma Loja de
Sapatos. Nesse algoritmo será lido apenas o valor total da compra. Há três
possibilidades de pagamento:
1) Pagamento à vista: há um desconto de 10% sobre o valor total da compra;
2) Pagamento 30 dias direto: há desconto de 5% sobre o valor total da compra;
3) Pagamento 60 dias direto: valor da compra sem desconto;
Após ler o valor total da compra, deve ser lido qual será a forma de pagamento (1,
2 ou 3), e com base nessa forma, deve ser mostrado o valor a ser pago pela
compra. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int opcao = 0;
    float valorCompra, desconto = 0;

    printf("Informe o valor total da compra...: ");
    scanf("%f", &valorCompra);

    printf("Qual será a forma de pagamento? \n1) Pagamento à vista: há um desconto de 10%% sobre o valor total da compra;\n");
    printf("2) Pagamento 30 dias direto: há desconto de 5%% sobre o valor total da compra;\n");
    printf("3) Pagamento 60 dias direto: valor da compra sem desconto;\n");
    scanf("%i", &opcao);

    if(opcao == 1){
        printf("Valor total...: %.2f \n", valorCompra);
        printf("Valor com desconto(10%%)...: %.2f", valorCompra - (valorCompra * 0.10));
    } else if(opcao == 2){
        printf("Valor total...: %.2f \n", valorCompra);
        printf("Valor com desconto(5%%)...: %.2f", valorCompra - (valorCompra * 0.05));
    } else {
        printf("Valor total...: %.2f \n", valorCompra);
        printf("Valor sem desconto...: %.2f", valorCompra);
    }
}