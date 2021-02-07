#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
    char fName[] = {"Daniel"};
    char lName[] = {"W"};

    char fNameCopy[7] = {};

    printf("First Name: %s\n", fName);
    printf("Last Name: %s\n", lName);

    strcpy(fNameCopy, fName);

    ///Ready to see a nightmare?
    char fullName[strlen(fName) + strlen(lName) +1];
    ///Oh you thought we were done?
    strcpy(fullName, fName);
    strcat(fullName, lName);

    printf("Full Name: %s\n", fullName);

    ///Now print your own name.
    printf("What's your name?\n> ");
    char usersname[200] = {};
    gets(usersname);
    printf("Your name is %s.\n", usersname);
    printf("By using the gets() function, we are able to get strings with spaces.\n");
}