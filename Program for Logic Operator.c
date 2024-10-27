//Program for Logic Operator
#include <stdio.h>

int main() 
{
    int x = 5;
    int y = 10;

    if (x < 10 && y > 5) 
    {
        printf("Both conditions are true.\n");
    }

    if (x > 10 || y > 5) 
    {
        printf("At least one condition is true.\n");
    } else 
    {
        printf("Neither condition is true.\n");
    }

    if (!(x > 10))
    {
        printf("a is not greater than 10.\n");
    }

    return 0;
}

