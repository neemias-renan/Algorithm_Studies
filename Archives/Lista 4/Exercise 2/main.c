// O programa a seguir imprime o índice da primeira ocorrência do número 4 em um arranjo
// de inteiros a. Note que o programa imprime -1 quando o número 4 não está presente no
// arranjo a.
// #include <stdio.h>
// int main(){
// int n = 6;
// int a[n];
// int i;
// int index = -1;
// for(i = 0; i < n; i++){
// scanf("%d", &a[i]);
// if(a[i] == 4 && index == -1){
// index = i;
// }
// }
// printf("O primeiro indice de 4 e %d \n", index);
// return 0;
// }

// 2. Escreva um nova versão do programa que imprime o índice da primeira ocorrência
// do número 5 no arranjo a.

#include <stdio.h>
int main()
{
    int n = 6;
    int a[n];
    int i;
    int index = -1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 5 && index == -1)
        {
            index = i;
        }
    }
    printf("O primeiro indice de 5 e %d \n", index);
    return 0;
}