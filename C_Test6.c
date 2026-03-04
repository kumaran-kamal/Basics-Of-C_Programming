//6.A product price and discount percentage are given. Write a C program to calculate the discount amount.
#include <stdio.h>
int main()
{
    float pp,dp;
    pp=100;
    dp=30;
    printf("The discount amount is: %f",pp*(dp/100));
}