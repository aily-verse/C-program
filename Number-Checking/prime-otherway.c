//WAP to check whether a no. is Prime or not (better version)
#include<stdio.h>
void main()
{
    int i,n,f=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
     {
        if(n%i==0)
        {
           f=1;
           break;
        }
     }
    if(f==0)
      printf("\n%d is Prime No. ",n);
    else
      printf("\n%d is NOT Prime No. ",n);
}
