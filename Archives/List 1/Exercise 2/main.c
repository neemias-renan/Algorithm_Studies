#include <stdio.h>

long mult(long a, long b)
{
    long s = a * b;
    return s;
}

int main()
{
    long a, b;
    
    scanf("%ld %ld", &a, &b);
    printf("%ld\n", mult(a, b));
    return 0;
}