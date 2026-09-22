/*
x-x+x-x+x-x+....
*/
#include<stdio.h>
void main()
{
    int i,n,s=0,b;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("Enter the Base = ");
    scanf("%d",&b);
    for(i=1;i<=n;i++)
    {
        if(i==1)
          {
            printf("%d ",b);
            s=s+b;
          }
        else if(i%2==0)
        {
            printf(" - %d ",b);
            s=s-b;
        }
        else
        {
            printf(" + %d ",b);
            s=s+b;
        }
    }
    printf(" = %d ",s);
}
