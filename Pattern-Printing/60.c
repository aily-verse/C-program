/*
D
C   C
B   B   B
A   A   A   A  
*/
#include<stdio.h>
void main()
{
   int i,j;
    for(i=68;i>=65;i--)
    {
       for(j=i;j<=68;j++)
       {
       printf("%c ",i);
       }
       printf("\n");
    }
}