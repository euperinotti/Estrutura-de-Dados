#include <stdio.h>
#include <conio.h>

int main() {
    // declaracao de variaveis
    char sexo = 'F'; // aspas simples para declarar uma string/char
    int idade = 15;
    float altura = 1.75;
    float anos, dias;

    printf("Escrevendo um caractere: %c \n", sexo);
    printf("Escrevendo um inteiro: %i \n", idade);
    printf("Escrevendo um float: %0.2f \n", altura);

    printf("Digite sua idade em anos: ");
    // para leitura de variaveis com scanf() é necessario usar
    // o & (e comercial) para alocar a variavel
    scanf("%f", &anos);
}