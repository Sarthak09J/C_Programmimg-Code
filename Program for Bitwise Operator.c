//Program for Bitwise Operator
#include <stdio.h>

int main()
{
// 1. Bitwise AND 
int x = 12, y = 25; 
printf("Output = %d",x & y);

// 2. Bitwise OR 
int z = 12, w = 25;
printf("Output = %d", z | w);

// 3. Bitwise XOR
int g = 12, h =25;
printf("Output = %d", g^h);

// 4. Bitwise complement 
printf("Output = %d\n", ~35); 
printf("Output = %d\n", ~-12);

// 5. Shift Operators 
int num=212, i; 
for (i = 0; i <= 2; ++i)

{ 
    printf("Right shift by %d: %d\n", i, num >> i); 
}
}