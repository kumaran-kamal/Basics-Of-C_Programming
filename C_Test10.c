//10.Two boxes in a warehouse have different weights. Due to a labelling mistake, the weights need to be interchanged. Write a C program to swap the weights using a temporary variable.
#include <stdio.h>
int main()
{
    int t,u,v;
    t=10;
    v=20;
    printf("The initial condition:\nweight1=%d\nweight2=%d",t,v);
    u=t;
    t=v;
    v=u;
    printf("\nThe initial condition:\nweight1=%d\nweight2=%d",t,v);
}