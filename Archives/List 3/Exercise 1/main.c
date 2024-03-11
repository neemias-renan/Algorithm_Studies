// O programa a seguir imprime os números inteiros de 1 a 10:
// #include <stdio.h>
// int main(){
// int n = 10;
// int i = 1;
// while(i <= n){
// printf("%d \n", i);
// i++;
// }
// return 0;
// }

// 1. Escreva uma nova versão do programa que imprime os inteiros de 10 a 20 e que
// mantém a estrutura de repetição.

#include <stdio.h>
int main()
{
    int n = 20;
    int i = 10;
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}