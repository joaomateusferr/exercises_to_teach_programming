#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,result;
    char op,con='s';

    printf("insira um numero a operacao e outro numero para saber o resultado\n\n");

    while(con!='n')
    {

        scanf("%f%c%f",&a,&op,&b);

        switch(op)
        {
        case '+':
            result=a+b;
            break;

        case '-':
            result=a-b;
            break;

        case '*':
            result=a*b;
            break;

        case '/':
            result=a/b;
            break;
        }


        printf("resultado = %.2f\n",result);

        printf("insira s para continuar e n para sair\n");
        fflush(stdin);
        scanf("%c",&con); //ou usar scanf("%s",&con); sem o fflush(stdin) pois o %s limá o bufer do teclado

    }



    return 0;
}
