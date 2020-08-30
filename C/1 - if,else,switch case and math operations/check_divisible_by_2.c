#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, remainder = 0;

    printf("Enter a number!\n");
    scanf("%i",&a);

    remainder = a%2;

    //being divisible by 2 is the same as being even and not being divisible by 2 is the same as being odd

    if(remainder == 0) {
        printf("Is divisible by 2\n");
    } else {
        printf("It is not divisible by 2\n");
    }

    return 0;
}
