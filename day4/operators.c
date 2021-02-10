#include <stdio.h>
#include <stdlib.h>

int main() {
    ///Calculator

    ///Declare variables for adding numbers
    int num1 = 0;
    int num2 = 0;

    ///Multiplication
    printf("Enter the first number to multiply\n> ");
    scanf("%d", &num1);

    printf("Enter the second number to multiply\n> ");
    scanf("%d", &num2);

    int resultMul = num1 * num2;

    printf("%d * %d = %d\n", num1, num2, resultMul);


    ///Addition
    printf("Enter the first number to add\n> ");
    scanf("%d", &num1);

    printf("Enter the second number to add\n> ");
    scanf("%d", &num2);

    int resultAdd = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, resultAdd);


    ///Subtraction
    printf("Enter the first number to subtract\n> ");
    scanf("%d", &num1);

    printf("Enter the second number to subtract\n> ");
    scanf("%d", &num2);

    int resultSub = num1 - num2;

    printf("%d - %d = %d\n", num1, num2, resultSub);

    ///Divison
    printf("Enter the first number to divide\n> ");
    scanf("%d", &num1);

    printf("Enter the second number to divide\n> ");
    scanf("%d", &num2);

    int resultDiv = num1 / num2;

    printf("%d / %d = ~%d\n", num1, num2, resultDiv);
    ///Calculator END

    ///Increments
    int i = 1;

    printf("i: %d\n", i);

    int j = i++;

    printf("j: i++ or %d\n", j);

    ///Relational Operators
    printf("1=1: %s\n", 1==1?"True":"False");
    printf("1!=3: %s\n", 1!=3?"True":"False");

    ///Init 2 variables at once
    int a = 1, b = 2;
    printf("a: %d\nb: %d\n", a, b);
    printf("Bytes allocated for a: %d\nBytes allocated for b: %d\n", sizeof(a), sizeof(b));
}