#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a=0;

    printf("insira um caracter\n");
    scanf("%c",&a);

    if((a=='s')||(a=='n')) {
        printf("eh s ou n\n");
    } else {
        printf("nao eh s ou n \n");
    }

    return 0;
}
