//8 Acromatic String
//input --> ankita ghosh output--> A.G.
#include<stdio.h>
#include<conio.h>
void main()
{
   char x[20];
   int i;
   printf("Enter the String = ");
   gets(x);
   printf("Original String = %s\n",x);
   //upper
   for(i=0;x[i]!='\0';i++)
   {
     if(x[i]>=97 && x[i]<=122)
       x[i]=x[i]-32;                       
   }  
   //acromatic
   for(i=0;x[i]!='\0';i++)
   {
       if(i==0)
         printf("%c.",x[i]);
       else if(x[i]==' ')
         printf("%c.",x[i+1]);
   }
   getch();
}