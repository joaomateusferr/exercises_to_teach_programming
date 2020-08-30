#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=0, b=0, c=0, aux=0;

  printf("Enter 3 numbers!\n");
  scanf("%i%i%i",&a,&b,&c);

  if(a > c) {
    aux=a;
    a=c;
    c=aux;
  }

  if(b > c) {
    aux=b;
    b=c;
    c=aux;
  }

  if(a > b) {
    aux=a;
    a=b;
    b=aux;
  }

  printf("%i is the biggest number",c);
  
  return 0;
}
