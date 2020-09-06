#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa (int a,int b)
{
    float h;

    h=sqrt(a)+sqrt(b);

    return h;
}

int main()
{
    int a,b;
    float h;

    printf("insira os dois catetos\n");
    scanf("%i",&a);
    scanf("%i",&b);

    h=hipotenusa(a,b);
    printf("a hipotenusa eh: %g",h);

    return 0;
}
