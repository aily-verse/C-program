// add -1 after the element if it is divisible by 5
#include<stdio.h>
void main()
{
    int i,n,x;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&x);
        if(x%5==0)
         {
            a[i]=x;
            a[i+1]=-1;
            i++;
            n++;
         }
         else
           a[i]=x;
    }
    //output
    for(i=0;i<n;i++)
      {
        printf("%d ",a[i]);
      }
}