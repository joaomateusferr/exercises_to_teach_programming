/*
Make an algorithm that allows a survey of the wine stock of a cellar, using as input data types of wine, being: 'R' for red, 'W' for white and 'RW' for rose .
Specify the percentage of each type over the grand total of wines. The quantity of wines is unknown, use as an ending 'F' finish.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insert the wine type!\n");

     int i, r = 0, w = 0, rw = 0, total = 0;
    float porr, porw, porrw;
    char type;

    /*
    Using do while I force at least one interaction to happen
    do while -> performs the operation then validates the condition
    while -> validates the condition then executes the operation
    */

    do {

        fflush(stdin);
        scanf("%c",&type);

        switch(type) {

            case 'r':
                r++;
                total++;
                break;

            case 'w':
                w++;
                total++;
                break;

            case 'rw':
                rw++;
                total++;
                break;

            default:
                printf("Invalid\n");
                break;
        }

    }while(type != 'f');

    porr = (r*100)/total;
    porw = (w*100)/total;
    porrw = (rw*100)/total;

    printf("Red %.2f%%\n
            White %.2f%%\n
            Rose %.2f%%\n",porr,porw,porrw);



    return 0;
}
