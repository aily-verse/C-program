/*
Spy no.
123,231,321,1421 etc
sum of digit == product of digit
231=2+3+1=6
231=2*3*1=6
*/
#include<stdio.h>
void main()
{
    int n,rem,s=0,x,t=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
        t=t*rem;
    }
    if(s==t)
      printf("Spy no.");
    else
      printf("Not spy no.");
}
