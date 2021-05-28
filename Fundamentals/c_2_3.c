//Program to find sum of first & last digit

#include <stdio.h>
int main()
{
    int num, a, b, sum;

    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    a = (num % 10);
    b = (num % 10000) / 1000;
    sum = a + b;

    printf("sum of first & last digit is: %d", sum);
}