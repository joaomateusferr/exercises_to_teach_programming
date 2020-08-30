#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a,b,result;
    char op;

    printf("insira um numero a operacao e outro numero para saber o resultado\n\n");

    for(i=1;i<3;i++)
    {

        scanf("%f%c%f",&a,&op,&b);

        if(op=='+')
        {
          result=a+b;
        }
            if(op=='-')
            {
              result=a-b;
            }
                if(op=='*')
                {
                  result=a*b;
                }
                    if(op=='/')
                    {
                      result=a/b;
                    }

                        printf("resultado = %.2f\n",result);
    }



    return 0;
}
