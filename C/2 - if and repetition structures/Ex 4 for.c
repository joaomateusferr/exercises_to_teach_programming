#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,mcont=0,fcont=0;
    float altura=0,mmaior,mtotal,fmaior,ftotal,mmenor=3,fmenor=3;
    char sexo;

    printf("insira o sexo (m ou f) em seguida a altura\n");

    for(i=1;i<11;i++)
    {
        fflush(stdin);
        scanf("%c %f",&sexo,&altura);

        if(sexo=='m')
        {
           mcont++;
           mtotal=mtotal+altura;

                       if(altura>mmaior)
                       {
                           mmaior=altura;
                       }
					   if(altura<mmenor)
					   {
						   mmenor=altura;
					   }

        }

        if(sexo=='f')
        {
           fcont++;
           ftotal=ftotal+altura;

                       if(altura>fmaior)
                       {
                           fmaior=altura;
                       }
					   if(altura<fmenor)
					   {
						   fmenor=altura;
					   }

        }

    }

    printf("maior m %.2f menor m %.2f\nmaior f %.2f menor f %.2f\nmedia m %.2f media f %.2f\n",mmaior,mmenor,fmaior,fmenor,mtotal/mcont,ftotal/fcont);


    return 0;
}
