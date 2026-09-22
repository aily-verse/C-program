/*
0
1 1
0 0 0
1 1 1 1
*/
#include<stdio.h>
void main()
{
   int i,j;
   for(i=1;i<=4;i++)
   {
      for(j=1;j<=i;j++)
        {
            if(i%2==0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
   }
}