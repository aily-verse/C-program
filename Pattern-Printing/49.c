/*
1 _ _ _ _ _ _ _ _ 1
1 2 _ _ _ _ _ _ 2 1
1 2 3 _ _ _ _ 3 2 1
1 2 3 4 _ _ 4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
void main()
{
   int i,j,sp;
    for(i=1;i<=5;i++)
    {
               
        for(j=1;j<=i;j++)
       {
       printf("%d ",j);
       }
        for(sp=1;sp<=2*(5-i);sp++){
            printf("  ");
        }
       for(j=i;j>=1;j--)
       {
       printf("%d ",j);
       }
       printf("\n");
    }
}