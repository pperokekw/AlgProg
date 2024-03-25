//Este programa retorna idade

#include <stdio.h>

int main(){
    int anoNascimento,idade; //Declarando as variáveis
    int anoAtual = 2024; //Ano em que o programa foi feito
    printf("Insira sua data de nascimento: \n");
    scanf("%d", &anoNascimento);
    idade = anoAtual-anoNascimento; //Retorna a idade
    printf("Sua idade é %d anos \n", idade);
    return 0;
}