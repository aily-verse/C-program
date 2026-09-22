//WAP to take char. array input & print the array
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    puts(x);
    //loop 
    for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);
}