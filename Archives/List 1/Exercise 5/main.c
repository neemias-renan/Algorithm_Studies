#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &y1);
    scanf("%f", &y2);

    // double x = ;

    printf("%f \n", sqrt(ldexp((x1 - x2), 2) + ldexp((y1 - y2), 2)));
    return 0;
}