/*
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,sp,k=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
          printf("*");
        for(sp=1;sp<=2*k;sp++)
          printf(" ");
        k++;
        for(j=1;j<=i;j++)
          printf("*");
        printf("\n");
    }
    k=k-2;
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
          printf("*");
        for(sp=2*k;sp>=1;sp--)
          printf(" ");
        k--;
        for(j=1;j<=i;j++)
          printf("*");
        printf("\n");
    }
}