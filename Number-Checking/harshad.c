/*
Harshad no.
20,45,72,63,200 etc
72=7+2=9
72 divisible by the sum of digit
*/
#include<stdio.h>
void main()
{
    int n,rem,s=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    if(x%s==0)
      printf("Harshad no.");
    else
      printf("Not harshad no.");
}
