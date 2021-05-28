#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float LT1, LG1, LT2, LG2, DL, DG, dist, naut_dist;

    printf("Enter Latitude of Location 1: \n");
    scanf("%f", &LT1);

    printf("Enter Latitude of Location 2: \n");
    scanf("%f", &LT2);

    printf("Enter Longitude of Location 1: \n");
    scanf("%f", &LG1);

    printf("Enter Latitude of Location 2: \n");
    scanf("%f", &LG2);

    DL = LT2 - LT1;
    DG = LG1 - LG2;

    dist = sqrt((DL * DL) + (DG * DG));

    printf("Distance in kms: %f\n", dist);

    naut_dist = 3963 * acos(sin(LT1) * sin(LT2) + cos(LT1) * cos(LT2) * cos(LG2 - LG1));

    printf("Distance in nautical miles: %f", naut_dist);
}