/*
Name: Erica Freeman
Student ID: 00320948
Description: Stores the digits of a three-digit number
in an array and prints the array.
*/

#include <stdio.h>

void printIntArray(int array[], int length);

int main(void)
{
    int number;
    int digits[3];

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    digits[0] = number / 100;
    digits[1] = (number / 10) % 10;
    digits[2] = number % 10;

    printIntArray(digits, 3);

    return 0;
}

void printIntArray(int array[], int length)
{
    int i;

    printf("[ ");
    for (i = 0; i < length; i++)
    {
        printf("%d", array[i]);

        if (i < length - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}
