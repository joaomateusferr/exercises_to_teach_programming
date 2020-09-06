#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b, c, greater;

  printf("insira 3 numeros\n");
  scanf("%i",&a);
  scanf("%i",&b);
  scanf("%i",&c);

  greater=a;

  if(b > greater) {
    greater = b;
  }

  if(c > greater) {
    greater = c;
  }

  printf("%i is the greater",greater);

  return 0;
}