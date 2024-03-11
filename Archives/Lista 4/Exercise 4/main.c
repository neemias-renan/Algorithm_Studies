#include <stdio.h>
int main()
{
    int n;
    scanf("%d", n);
    int a[n];
    int i;
    int index = -1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 4 && index == -1)
        {
            index = i;
        }
    }
    printf("O primeiro indice de 4 e %d \n", index);
    return 0;
}