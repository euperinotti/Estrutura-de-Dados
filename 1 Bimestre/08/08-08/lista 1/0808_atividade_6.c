
/* 6) Montar uma calculadora com as quatro operações básicas, utilizando a estrutura
case. O exercício deve testar a divisão inválida por zero. */

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num1 = 0, num2 = 0;
    char opcao = "";

    printf("Informe o valor do primeiro numero...: ");
    scanf("%f", &num1);

    printf("Informe o valor do segundo numero...: ");
    scanf("%f", &num2);

    printf("Escolha a operacao a ser usada:");
    printf("\n[+] Soma \n[-] Subtracao \n[*] Multiplicacao \n[/] Divisao \n Operacao: ");
    scanf(" %c", &opcao);

    switch (opcao){
    case '+':
        printf("Operacao escolhida...: [+] Soma \n");
        printf("Resultado...: %.2f", num1 + num2);
        break;

    case '-':
        printf("Operacao escolhida...: [-] Subtracao \n");
        printf("Resultado...: %.2f", num1 - num2);
        break;
    
    case '*':
        printf("Operacao escolhida...: [*] Multiplicacao\n");
        printf("Resultado...: %.2f", num1 * num2);
        break;
    
    case '/':
        printf("Operacao escolhida...: [/] Divisao \n");
        if(num1 == 0){
            printf("Nao e possivel dividir por 0");
        } else {
            printf("Resultado...: %.2f", num1 / num2);
        }
        break;
    
    default:
        printf("Operacao invalida");
        break;
    }
}