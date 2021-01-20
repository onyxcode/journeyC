#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "cntexit.h"

int main() {
    int funny; ///declare the variable
    funny = 69; ///define the variable
    printf("Funny number is %d", funny); ///print the variable

    cont();

    double longFunny = 69.420; ///define and declare the variable
    printf("Another funny number is %lf", longFunny);

    cont();

    char funnyLetter = 'B';
    funnyLetter = 66; ///casting
    printf("Funny letter is %c", funnyLetter);
    cont();

    _Bool boo = 0;
    printf("Boolean is %d", boo);
    cont();

    char name[] = "This program brought to you by onyxcode.";
    printf("%s", name);
    ext();

    return 0;
}