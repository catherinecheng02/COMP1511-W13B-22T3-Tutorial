// 2d while loop demo
// Written by Catherine Cheng 28-09-2022
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int row = 0;
    
    while (row < n){
        int col = 0;
        while (col < n) {
            printf("X");
            col++;
        }
        printf("\n");
        row++;

    }

    return 0;
}
