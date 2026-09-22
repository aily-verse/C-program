/*
* * * *
_ * * *
_ _ * *
_ _ _ *
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the Term = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(sp=n-1;sp>=i;sp--)
        {
             printf("_ ");
        }
        for(j=1;j<=i;j++)
          printf("* ");
        printf("\n");
    }

}