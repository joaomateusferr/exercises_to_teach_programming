#include <stdio.h>
#include <stdlib.h>

void troca (a,b)
{
    int aux;

    aux=a;
    a=b;
    b=aux;

    printf("numeros invertidos\n");
    printf("%i %i\n",a,b);
}

int main()
{
    int a,b;
    float h;

    printf("insira os dois numeros\n");
    scanf("%i",&a);
    scanf("%i",&b);

    troca(a,b);

    return 0;
}
