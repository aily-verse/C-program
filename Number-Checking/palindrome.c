/*
Palindrome no.     171,151,515
reverse of a no. = no.
*/
#include<stdio.h>
void main()
{
    int n,rem,rev=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    if(x==rev)
        printf("Palindrome no.");
    else
        printf("Not palindrome no.");
}
