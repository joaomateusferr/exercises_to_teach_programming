#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0, sum = 0;

    printf("Enter 3 numbers!\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    sum = a+b+c;

    if(sum >= 100) {
        printf("The sum is greater than or equal to 100\n");
    } else {
        printf("The sum is less than 100\n");
    }

    return 0;
}
