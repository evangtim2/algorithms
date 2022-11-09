#include <stdio.h>

int cubeByValue(int n); // prototype

int main(void)
{
    int number = 5; // initilize number

    printf("The original vlaue of number is %d", number);

    // pass number by value to cubeByValue
    number = cubeByValue(number);
    printf("\nThe new value of number is %d\n", number);
}

// calculate and return cube of interger argument
int cubeByValue(int n)
{
    return n * n * n; // cube loca variable n and return result
}
