//3.A park has a given length and breadth. Write a C program to calculate the area of the park.
#include <stdio.h>
int main()
{
    int l,b,ar;
    printf("Enter the length of the park: ");
    scanf("%d",&l);
    printf("Enter the breadth of the park: ");
    scanf("%d",&b);
    printf("The area of the part is: %d",l*b);
}