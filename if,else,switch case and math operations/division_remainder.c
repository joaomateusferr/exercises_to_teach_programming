#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,res=0;

    printf("insira um numero\n");
    scanf("%i",&a);


    res=a%2;

    if(res==0)
    {
        printf("eh divisivel por 2\n");
    }

    else
    {
        printf("nao eh divisivel por 2\n");
    }

    return 0;
}
