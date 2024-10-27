//Program for Ternary Operator
#include <stdio.h>

int main() 
{
    int x = 10, y = 20;
    int max;

    max = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max);

    return 0;
}
