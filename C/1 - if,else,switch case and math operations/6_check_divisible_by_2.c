#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    printf("Enter a number!\n");
    scanf("%i",&a);

    //the % operation can only be used with integer values
    if(a % 2 == 0) {
        printf("Is divisible by 2\n");
    } else {
        printf("It is not divisible by 2\n");
    }

    //being divisible by 2 is the same as being even and not being divisible by 2 is the same as being odd

    return 0;
}
