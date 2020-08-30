#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,j,ano=0;

    for(m=150,j=110 ; j<=m ; m=m+2,j=j+3)
    {
        printf("%i %0.2f %0.2f\n", ano,m/100.0,j/100.0);
        ano++;
    }

    printf("\n%i anos para Jose ser maior que maria",ano);

    return 0;
}
