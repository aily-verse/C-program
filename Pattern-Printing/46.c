/*
1   2   3   4   4   3   2   1   
1   2   3   *   *   3   2   1   
1   2   *   *   *   *   2   1
1   *   *   *   *   *   *   1
*/
#include<stdio.h>
void main()
{
   int i,j,sp;
    for(i=4;i>=1;i--)
    {
               
        for(j=1;j<=i;j++)
       {
       printf("%d ",j);
       }
        for(sp=1;sp<=2*(4-i);sp++){
            printf("* ");
        }
       for(j=i;j>=1;j--)
       {
       printf("%d ",j);
       }
       printf("\n");
    }
}