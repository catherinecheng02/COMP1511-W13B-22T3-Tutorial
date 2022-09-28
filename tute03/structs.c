// Struct demo
// Written by Catherine Cheng 28-09-2022
#include <stdio.h>

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    struct person catherine;
    catherine.shoe_size = 36;
    catherine.height = 160;

    struct person will;
    will.first_name_initial = 'w';
    printf("%c\n", will.first_name_initial);

    return 0;
}
