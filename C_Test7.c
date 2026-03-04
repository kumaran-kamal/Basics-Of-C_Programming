//7.A time duration is given in hours and minutes. Write a C program to calculate the total time in seconds.
#include <stdio.h>
int main()
{
    int hou,min,q,e;
    hou=2;
    min=45;
    q=hou*60*60;
    e=min*60;
    printf("The total duration is seconds: %d",q+e);
    
}