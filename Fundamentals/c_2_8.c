#include<stdio.h>
#include<math.h>
int main()
{
    float degree, result;

    printf("Enter the degree of angle: ");
    scanf("%f", &degree);

    result = (sin(degree)*sin(degree)) + (cos(degree)*cos(degree));

    printf("Result is: %f", result);
}
