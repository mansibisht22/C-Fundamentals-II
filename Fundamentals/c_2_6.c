#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s, area;

    printf("Enter lengths of triangle A,B,C: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("AREA OF TRIANGLE IS: %d", area);
}