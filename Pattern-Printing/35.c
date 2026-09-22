/*
        *
      * * *
    * * * * *
  * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=3;sp>=i;sp--){
          printf("_ ");
        }
        for(j=1;j<=i;j++)
        {
          printf("* ");
        }
        for(j=i-1;j>=1;j--)
        {
          printf("* ");
        }
        printf("\n");
    }
}