//Program to calulate sum of digits; Number input

#include <stdio.h>
int main()
{
    int num, a, b, c, d, e, sum;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    a = (num % 10);
    b = (num % 100) / 10;
    c = (num % 1000) / 100;
    d = (num % 10000) / 1000;
    e = (num % 100000) / 10000;

    sum = a + b + c + d + e;

    printf("sum is: %d", sum);
}