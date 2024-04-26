// Este programa calcula o menor volume e área para um cubo de lado l inscrito a uma esfera de raio r
#include <stdio.h> //Biblioteca para I/O
#include <math.h>  //Biblioteca para funções matemáticas
#define PI 3.1416
int main()
{
    float lCubo, rEsfera, volEsfera, areaEsfera; // Declarando as variáveis
    printf("Insira o lado do cubo: \n");
    scanf("%f", &lCubo);
    rEsfera = lCubo * sqrt(3) / 2; // Raio de esfera circunscrita a um cubo
    volEsfera = (4 * PI * pow(rEsfera, 3)) / 3;
    areaEsfera = (4 * PI * pow(rEsfera, 2));
    printf("Volume esfera: %f\n", volEsfera);
    printf("Area esfera: %f\n", areaEsfera);
    return 0;
}