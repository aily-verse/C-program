//WAP to convert from lower to upper or vice versa using ternary
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the Letter = ");
    scanf("%c",&x);
    (x>=65 && x<=90)?printf("%c",x+32):(x>=97 && x<=122)?printf("%c",x-32):printf("%c",x);
}
