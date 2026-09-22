//WAP to take input into an integer array & print -1 after numbers divisible by 5
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];   //declaration
    for(i=0;i<3*n;i++)
    {
        //Input
        if(i<n)
        {
            printf("Enter the No. = ");
            scanf("%d",&a[i]);
        }
        //array print
        else if(i<2*n)
        {
            if(i==n)
                printf("Old Array = ");
            printf("%d ",a[i-n]);
        }
        // -1 add after
        else
        {
            if(i==2*n)
                printf("\nNew Array = ");
            printf("%d ",a[i-2*n]);
            if(a[i-2*n]%5==0)
                printf("-1 ");
        }
    }
}