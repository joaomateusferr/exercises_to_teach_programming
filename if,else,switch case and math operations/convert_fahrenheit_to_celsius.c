#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c=0,f=0;

    printf("insira a temperatura em fahrenheit\n");
    scanf("%f",&f);

    c=(f-32)*5/9;

    printf("a temperatura em celsius eh %g\n",c);

    return 0;
}
