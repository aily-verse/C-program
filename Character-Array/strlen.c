//WAP to calc. the length of a string by using system defined func. or library func. or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   int len;
   printf("Enter the String = ");
   gets(x);
   printf("String = %s",x);
   len=strlen(x);
   printf("\nLength = %d",len);
}