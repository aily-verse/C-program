//WAP to convert higher to lower case.
#include<stdio.h>
void main()
{
    char x[20];
    int i,f=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90){
          x[i]=x[i]+32;
        }
        printf("%c",x[i]);
    }
}