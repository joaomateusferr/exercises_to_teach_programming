#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;

    printf("insira um numero\n");
    scanf("%i",&a);

    if(a > 0) {
        printf("eh positivo\n");
    }

    if(a < 0) {
        printf("eh negativo\n");
    }

    if(a == 0) {
        printf("eh igual a 0\n");
    }

    return 0;
}
