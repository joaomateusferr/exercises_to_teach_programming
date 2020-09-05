/*
Make an algorithm that reads 10 names of people and their respective heights.
Then calculate the average of the heights and show the name of the people who are above average height and also the highest and lowest height.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main()
{
    int i, j, total;
    char names[MAX][50]; //names is an matrx of characters also known as a string vector
    float heights[MAX], average, sum, higher, lower;

    for(i = 0 ; i < MAX ; i++) {
        scanf("%s",&names[i]);
        scanf("%f",&heights[i]);
        
        sum = sum + heights[i]; // you can make the sum at the same time as filling in the vector to save processing power and decrease the complexity of the code
    }

    average = sum/i;
    higher = heights[0];
    lower = heights[0];

    for(i = 0 ; i < MAX ; i++) {

        if(heights[i] > higher) {
            higher = heights[i];
        }

        if(heights[i] < lower) {
            lower = heights[i];
        }
    }

    printf("Average: %0.2f\n
            Higher %0.2f\n
            Lower %0.2f\n
            Names of people who are taller than the average\n",average,higher,lower);

    for( i = 0 ; i < MAX ; i++) {
       if(heights[i]>average) {
           printf("%s\n",names[i]);
       }
    }

    return 0;
}
