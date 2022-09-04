// Faca um algoritmo que realize as 4 operações	matematicas

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

char opcao;

char operacao(){
    printf("Escolha uma operacao\n");
    printf("\n[+] Soma \n[-] Subtracao \n[*] Multiplicacao \n[/] Divisao \n Operacao: ");
    scanf(" %c", &opcao);
    return opcao;
}

int verificar(char opcao, float num1, float num2){
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
        if(num2 == 0){
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

int main() {
    float num1 = 0, num2 = 0;

    printf("Informe o valor do primeiro numero...: ");
    scanf("%f", &num1);

    printf("Informe o valor do segundo numero...: ");
    scanf("%f", &num2);

    operacao();

    verificar(opcao, num1, num2);
}