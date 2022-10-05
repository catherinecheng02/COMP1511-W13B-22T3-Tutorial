// Scanf demo 
// Written by Catherine Cheng (z5310517) on 05-10-2022

#include <stdio.h>
#define SIZE 10
int main(void) {
    // We are going to scan temperatures into an array , 
    // and then find the largest of them


    // declare array
    double array[SIZE];
    // scan temperatures in using while loop
    int i = 0;
    while (i < SIZE) {
        scanf("%lf", &array[i]);
        i++;

    }

    // while ( scanf("%lf", &array[i]) == 1)

    // find max
    double max = array[0];
    i = 0;
    while (i < SIZE) {
        if (max < array[i]) {
            max = array[i];
        }

        i++;
    }

    
}
