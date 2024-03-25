//Este programa executa a soma de dois números
#include <stdio.h>

int main(){
    int val1, val2, soma; //Declarando as variáveis - Dos termos da soma, e a variável onde será armazenada a soma.
    printf("Insira o primeiro termo da soma: \n");
    scanf("%d", &val1); //Recebe o valor do primeiro termo
    printf("Insira o valor da segunda soma: \n");
    scanf("%d",&val2); //Recebe o valor do segundo termo
    soma = val1+val2; //Executa a soma
    printf("O valor da soma é %d\n",soma);
    return 0;


}