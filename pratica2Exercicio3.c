// Este programa calcula as médias aritmética e geométrica entre dois números x e y inseridos pelo usuário

#include <stdio.h> //Biblioteca para I/O
#include <math.h>  //Biblioteca para funções matemáticas
#include <ctype.h>
int main()
{

    float x, y, ma, mg;
    char c;
    // Declarando as variáveis
    printf("Insira x e y: \n");

    scanf("%f %f", &x, &y);
    ma = (x + y) / 2; // Cálculo da Média Aritmética
    printf("---=---\n");
    if (x > 0 && y > 0)
    {
        printf("Digite o caractere 'a' para media aritmetica ou 'g' para media geometrica: ");
        scanf(" %c", &c);
        c = toupper(c);
        if (c == 'A')
        {

            printf("A media aritmetica entre %.6f e %.6f e: %.6f\n", x, y, ma);
        }
        else if (c == 'G')
        {
            mg = sqrt((x * y)); // Cálculo da média geométrica
            printf("A media geometrica entre %.6f e %.6f e: %.6f\n", x, y, mg);
        }
        else
            printf("Caractere invalido!");
    }
    else
    {
        printf("A media aritmetica entre %.6f e %.6f e: %.6f\n", x, y, ma);
    }
    return 0;
}
