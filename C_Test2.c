//2.An electricity meter shows previous reading and current reading. Write a C program to calculate the units consumed.
#include <stdio.h>
int main()
{
    int pr,cr;
    printf("Enter the previous reading: ");
    scanf("%d",&pr);
    printf("Enter the current reading: ");
    scanf("%d",&cr);
    printf("The units consumed: %d",cr-pr);
    
}