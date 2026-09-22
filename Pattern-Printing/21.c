/*
    _ _ _ *         _ _ _ 1
    _ _ * *         _ _ 1 2
    _ * * *         _ 1 2 3
    * * * *         1 2 3 4
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the Term = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
        {
             printf(" ");
        }
        for(j=1;j<=i;j++)
          printf("* ");
        printf("\n");
    }

}