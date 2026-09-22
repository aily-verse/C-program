/*
A
A   A
A   A   A
A   A   A   A
*/
#include<stdio.h>
void main()
{
   int i,j,k=65;
    for(i=1;i<=4;i++)
    {
       for(j=1;j<=i;j++)
       {
       printf("%c ",k);
       }
       printf("\n");
    }
}