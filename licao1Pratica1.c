/*
    Este programa recebe 3 números como entrada e devolve a soma e o produto entre eles como saída 
*/
#include <stdio.h>
int main(){
    int val1,val2,val3, soma, produto;
    printf("Insira o primeiro número: \n");
    scanf("%d",&val1); //Recebe o primeiro termo
    printf("Insira o segundo número: \n");
    scanf("%d",&val2); //Recebe o segundo termo
    printf("Insira o terceiro número: \n");
    scanf("%d",&val3); //Recebe o terceiro termo
    soma = val1+val2+val3; //Executa a soma
    produto = val1*val2*val3; //Executa o produto

    printf("A soma entre %d, %d e %d é = %d e o produto é = %d\n", val1,val2,val3,soma,produto);
    return 0;
}