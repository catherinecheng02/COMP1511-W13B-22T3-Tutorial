// Week 2 Code Demo
// Written by Catherine Cheng 
// 10-06-2022
// Write a short program which:
//- Scans in two integers (a and b).
// - If the first integer is less than the second, prints out a short error message using a procedure.
// - If the second integer is 0, prints out a short error message.
// - If the first integer is larger than the second, prints a / b and (a * 1.0) / (b * 1.0).

#include <stdio.h>

void first_error(void) {
    printf("first integer is less than second oops\n");
    
}

int main (void) {
    int a;
    int b;
    scanf("%d", &a); // & stands for address of 
    scanf("%d", &b);
    
    if (a < b) {
        first_error();
    } 
    
    else if (b == 0) {
        printf("oops second integer is 0\n");
    }
    else if (a > b) {
        printf("%d\n", a/b);
        printf("%lf", (a * 1.0) / (b * 1.0));
    
    } else {
        //print something here
    }
    return 0;

}
