#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///Create another function.
double getAge() {
    double age = 0;
    printf("What's your age?\n> ");
    scanf("%lf", &age);

    return age;
}

int getSum() {
    int first = 0;
    int second = 0;
    printf("Add ");
    scanf("%d", &first);
    printf("+ ");
    scanf("%d", &second);
    return("%d", first+second);

}

///This function takes parameters
int getProd(int num, int num2) {
    int product = num * num2;
    return product;
}

///This returns nothing because void basically means "do your job silently with no feedback"
void printNum(int num) {
    printf("%d", num);
}

void addOne(int *var) {
    (*var)++;
}

int main() {

    double age = getAge();
    printf("Age is %lf.\n", age); 
    int sum = getSum();
    printf("Answer is %d\n", sum);
    int mult = getProd(10,9);
    printf("10*9 is %d.\n", mult);
    printf("printNum(); returns a given number: ");
    printNum(21);
    printf("\n");
    ///Create new variable
    int new = 1;
    printf("Value of `new` before addOne(); - %d\n", new);
    addOne(&new);
    printf("Value of `new` after addOne(); - %d\n", new);
    return 0;
}