#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    float a, b, result;
    char op;

    printf("Enter a number, an operation and another number to know the result!\n\n");

    for(i = 1 ; i < 3 ; i++) {

        fflush(stdin);
        scanf("%f%c%f",&a,&op,&b);

        switch(op) {
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


        printf("Result = %.2f\n",result);
    }



    return 0;
}
