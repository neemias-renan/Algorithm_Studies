#include <stdio.h>

int mult(int a, int b)
{
    long s = a * b;
    return s;
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d\n", mult(a, b));
    return 0;
}