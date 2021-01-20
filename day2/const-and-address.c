#include <stdio.h>
#include <stdlib.h>
#include "cntexit.h"
#define Pi 3.14159

int main() {
    double x = Pi;
    printf("Pi is %lf", x);

    cont();


    printf("The address of variable x in memory is: %p", &x);
    ext();
    return 0;
}