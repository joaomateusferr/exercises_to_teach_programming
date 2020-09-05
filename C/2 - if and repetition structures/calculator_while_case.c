#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, b, result;
    char op, con = 'y'; 
    
    /*
    con is initialized with y to make at least one interaction occur, but it can also be done using do while
    do while -> performs the operation then validates the condition
    while ->validates the condition then executes the operation
    */

    printf("Enter a number, an operation and another number to know the result!\n\n");

    while(con!='n'){

        fflush(stdin);
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


        printf("Result = %.2f\n",result);

        printf("Enter y to continue or n to exit\n");
        fflush(stdin);
        scanf("%c",&con);
    }

    //fflush(stdin) -> is used to clear the keyboard buffer when using %c and it can be substituted for scanf("%s",&con)

    return 0;
}
