#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 0;
    int year = 0;
    char name[50] = "";

    printf("Please enter your first name.\n> ");
    scanf("%s", name);

    printf("\nPlease enter your age.\n> ");
    scanf("%d", &age);
    fflush(stdin);

    printf("\nPlease enter the year you were born.\n> ");
    scanf("%d", &year);
    fflush(stdin);

    printf("\nYour name is %s.\nYou are %d years old.\nYou were born in %d.\n", name, age, year);

    return 0;
}