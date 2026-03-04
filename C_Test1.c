//1.A student scored marks in 3 subjects. Write a C program to calculate and print the total marks.
#include <stdio.h>
int main()
{
    int a1,a2,a3,t;
    printf("Enter the mark in sub1: ");
    scanf("%d",&a1);
    printf("Enter the mark in sub2: ");
    scanf("%d",&a2);
    printf("Enter the mark in sub3: ");
    scanf("%d",&a3);
    printf("The total marks is: %d",a1+a2+a3);
}