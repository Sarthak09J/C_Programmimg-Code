//Program for Arithematic Operators
#include<stdio.h>
int main()

{
    int x=10,y=20,sum,sub,multi,div,mod;
    printf("The 1st value is=%d\n",x);
    printf("The 2nd value is=%d",y);
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=y/x;
    mod=y%x;
    printf("\nThe sum=%d",sum);
    printf("\nThe subtraction=%d",sub);
    printf("\nThe Multiply=%d",multi);
    printf("\nThe Division=%d",div);
    printf("\nThe Modulus=%d",mod);
    return 0;
}
