//4.A weather station records temperatures for morning, afternoon, and evening. Write a C program to find the average temperature. (Use float variable)
#include <stdio.h>
int main()
{
    float mt,at,et;
    printf("Enter the morning temp: ");
    scanf("%f",&mt);
    printf("Enter the afternoon temp: ");
    scanf("%f",&at);
    printf("Enter the evening temp: ");
    scanf("%f",&et);
    printf("The average temp is: %f",(mt+at+et)/3);
}