/*
     A B C D
     B C D
     C D
     D

     65 66  67  68  
     66 67  68
     67 68
     68
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=68;i++)
    {
       for(j=i;j<=68;j++)
       {
       printf("%c ",j);
       }
       printf("\n");
    }
}