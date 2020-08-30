#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=1;
    float r=0,s=0;



    for(i=1;i<51;i++)
    {
        printf("%i/%i + ",j,i);

        r=(float)j/(float)i;
        s=s+r;
        j=j+2;
    }

    printf("\nsoma = %g",s);


    return 0;
}
