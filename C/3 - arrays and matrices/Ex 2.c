#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int main() {

    int a[MAX], i, sum=0;

    for(i = 0 ; i < MAX ; i++) {
        scanf("%i",&a[i]);
        //sum = sum +a[i]; => you can make the sum at the same time as filling in the vector to save processing power and decrease the complexity of the code but it is not the goal for now
    }

    for(i = 0 ; i < MAX ; i++){
        sum = sum + a[i];
    }

    printf("The sum of the vector values is %i",sum);

    return 0;
}
