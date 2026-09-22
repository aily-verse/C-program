/*
A   A   A   A
A   A   A   
A   A   
A
*/
#include<stdio.h>
void main()
{
   int i,j,k=65;
    for(i=4;i>=1;i--)
    {
       for(j=1;j<=i;j++)
       {
       printf("%c ",k);
       }
       printf("\n");
    }
}