/*
   A 
   B C
   D E F
   G H I J

   1
   1  2  
   1  2  3  
   1  2  3  4

   65
   66 67
   68 69 70
   71 72 73 74
*/
#include<stdio.h>
void main()
{
    char x='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
         printf("%c ",x);
         x++;
      }
      printf("\n");
    }
}