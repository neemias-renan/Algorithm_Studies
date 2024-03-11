#include <stdio.h>

int main()
{
    int a[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    int x = 2;
    int y = 4;

    // a
    printf("a = %d \n", a[0]);
    // b
    printf("b = %d \n", a[x]);
    // c
    printf("c = %d \n", a[y]);
    // d
    printf("d = %d \n", a[x + 1]);
    // e
    printf("e = %d \n", a[y + 3]);
    // f
    printf("f = %d \n", a[x * 4]);
    // g
    printf("g = %d \n", a[x + y]);
    // h
    printf("h = %d \n", a[a[5]]);
    // i
    printf("i = %d \n", a[8 - a[2]]);
}