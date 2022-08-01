#include <stdio.h>

int main() {
    char nome[10];
    int idade;
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("Digite sua idade:");
    scanf("%i", idade);

    printf("Seu nome é %s, e você tem %i anos", nome, idade);
}