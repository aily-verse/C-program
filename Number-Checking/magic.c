/*
Magic no.
19,28,37,55,172,181 etc
46=4+6=10   10=1+0=1
*/
#include<stdio.h>
void main()
{
    int n,rem,s=0,x,t,re,sum;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    for(t=s;s>0;s=s/10)
    {
        re=s%10;
        sum=sum+re;
    }
    if(sum==1)
      printf("Magic no.");
    else
      printf("Not magic no.");
}
