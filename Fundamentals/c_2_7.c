#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, theta;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of y: ");
    scanf("%f", &y);

    r = sqrt(x * x + y * y);
    theta = atan(x / y);

    printf("r: %f", r);
    printf("theta: %f", theta);

    printf("The polar coordinates (r, theta): %f %f", r, theta);
}