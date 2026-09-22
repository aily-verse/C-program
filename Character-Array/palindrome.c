//WAP to check whether a string is palindrome or not.
#include<stdio.h>
void main()
{
    char x[20];
    int i,j,f=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++);
    i--;
    for(j=0;j<i;j++,i--)
    {
        if(x[i]>=65 && x[i]<=90){
          x[i]=x[i]+32;
        }
        if(x[j]>=65 && x[j]<=90){
          x[j]=x[j]+32;
        }
        if(x[j]!=x[i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}