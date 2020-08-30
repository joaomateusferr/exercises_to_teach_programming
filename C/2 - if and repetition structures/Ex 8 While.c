#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=150,j=110,ano=0;

    while(m>=j)
    {
        printf("%i %0.2f %0.2f\n", ano,m/100.0,j/100.0);
        ano++;
        j=j+3;
        m=m+2;
    }

    printf("\n%i anos para Jose ser maior que maria",ano);

    return 0;
}
