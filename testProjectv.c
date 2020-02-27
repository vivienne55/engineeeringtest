#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //Not the change of %d to %f?
    y = (x+2)/(x-1);
    printf("Y: %f\n", y);
    return 0;
}
