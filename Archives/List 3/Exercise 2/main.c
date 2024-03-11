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

// 2. Escreva uma nova versão do programa que imprime os inteiros de 1 a n, onde o
// valor de n é fornecido pelo usuário.

#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}