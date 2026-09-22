//WAP to print the odd index of a string
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
     {
        if(i%2!=0)
           printf("%c",x[i]);
     }
}