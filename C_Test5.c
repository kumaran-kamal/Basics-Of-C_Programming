//5.A movie duration is given in minutes. Write a C program to convert it into hours.
#include <stdio.h>
int main()
{
    float min;
    float hour;
    printf("Enter the movie duration is minutes: ");
    scanf("%f",&min);
    hour=min/60;
    printf("The movie duration in hours: %f",hour);
}