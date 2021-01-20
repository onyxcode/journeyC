#include <stdlib.h>
#include <stdio.h>
#include "cntexit.h"

int main() {
    ///This is like calling a JSON document in Python, I love it
    int array[10];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    printf("Some cool numbers are %d, %d, and %d.", array[0], array[1], array[2]);
    
    cont();

    ///Again, 2D arrays are just like JSON!
    int array2D[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };
    printf("A number, %d is called from array2D[1][1], with 3 columns and 2 rows.", array2D[1][1]);
    
    cont();

    ///Grab a few memory addresses while you're here
    ///We can ignore gcc's warnings about expected type
    printf("Memory address of array[1] is: %p\n", &array[1]);
    printf("Memory address of 60 in array2D[2][2] is: %p", &array2D[2][2]);

    ext();
    return 0;
}