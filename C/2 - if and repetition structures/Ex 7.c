#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n1,n2,soma=0;

    scanf("%i",&n1);
    scanf("%i",&n2);

    for(i=1;i<n1+1;i++)
    {
        soma=soma+n2;
    }

    printf("\n%i X %i = %i\n",n1,n2,soma);

    return 0;
}
