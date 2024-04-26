// Este programa executa um modelo de crescimento populacional dado por  P(t) = P0*e^(alpha*t)
#include <stdio.h> //Biblioteca para I/O
#include <math.h>  //Biblioteca para funções matemáticas
int main()
{
    int P0, t, P;
    float alpha;
    // declarando as variáveis, sendo elas população inicial e final, instante de tempo e taxa de crescimento
    printf("Insira a populacao inicial: \n");
    scanf("%d", &P0);
    printf("Insira alpha: \n");
    scanf("%f", &alpha);
    printf("Insira o instante de tempo: \n");
    scanf("%d", &t);
    P = round(P0 * exp(alpha * t));
    printf("Populacao final: %d", P);
    return 0;
}