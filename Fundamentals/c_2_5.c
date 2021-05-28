//Program to add 1 to every digit; Number input through

#include <stdio.h>
int main()
{
    int num, a, b, c, d, e;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    a = (num % 10) + 1;
    b = (num % 100) / 10 + 1;
    c = (num % 1000) / 100 + 1;
    d = (num % 10000) / 1000 + 1;
    e = (num % 100000) / 10000 + 1;

    printf("New Number is: %d%d%d%d%d", e,d,c,b,a);
}