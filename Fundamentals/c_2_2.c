//Program to reverse number; Number input through keyboard

#include <stdio.h>
int main()
{
    int num, a, b, c, d, e;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    a = (num % 10);
    b = (num % 100) / 10;
    c = (num % 1000) / 100;
    d = (num % 10000) / 1000;
    e = (num % 100000) / 10000;

    printf("reversed no. is: %d %d %d %d %d", a ,b, c, d, e);
}