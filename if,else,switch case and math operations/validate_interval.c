#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;

    printf("insira um numero\n");
    scanf("%i",&a);

    if(a >= -1 && a <= 1) {
        printf("esta no intervalo entre -1 e 1\n");
    } else {
        printf("nao esta no intervalo entre -1 e 1\n");
    }

    return 0;
}
