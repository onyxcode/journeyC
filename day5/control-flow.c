#include <stdio.h>
#include <stdlib.h>


int main() {

    ///Desicions | Is it a car?
    int answer;
    printf("Do you have a car? Type 1 for yes and 2 for no.\n> ");
    scanf("%d", &answer);

    switch (answer) {
    case 1:
        printf("Good for you!\n");
        break;
    case 2:
        printf("You should buy a Tesla.\n");
        break;
    default:
        printf("Not a valid option. Press 1 for yes and 2 for no.");
    }

    ///Loops
    printf("Numbers will now appear...\n");
    int nums[] = {21,69,420,9000,1,3,5,7,9};
    int i = 0;
    ///While loop
    while (i < 9) {
        printf("%d\n", nums[i++]);
        sleep(1);
    }
    ///For loop
    printf("And again...\n");
    ///this is basically the same as PHP
    for (int k = 0; k < 9; k++) {
        printf("%d\n", nums[k]);
        sleep(1);
    }

    ///Program time
    printf("Enter a number between 1 and 1000.\n> ");
    int inp = 0;
    scanf("%d", &inp);

    while (inp < 1 || inp > 1000) {
        printf("Try again.\n> ");
        scanf("%d", &inp);
    }

    printf("Your number was %d. Thank you for following instructions.\n", inp);

    ///Continue and break loop
    int num = 0;
    printf("Enter a number less than 1000 and greater than 250.\n> ");
    while(1) {
        scanf("%d", &num);

        if (num > 1000 || num < 250) {
            printf("Try again.\n> ");
            continue;
        }
        
    printf("Your number was %d. Thank you for following instructions.\n", num);
    break;
    }
}