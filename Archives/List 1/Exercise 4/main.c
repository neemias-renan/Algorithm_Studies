// Escreva um programa que calcule a média aritmética de quatro números reais
// informados pelo usuário.

#include <stdio.h>


int main()
{
    float x1, x2, x3, x4;

    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);

    float resultado = (x1 + x2 + x3 + x4)/4;
    printf("%.2f", resultado);

    return 0;
}
