//WAP to check whether a no. is Pronic or not    0,2,6,12 etc    30=5*6
#include<stdio.h>
void main()
{
    int i,n,f=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)
     {
        if(i*(i+1)==n)
        {
           f=1;
           break;
        }
     }
    if(f==1)
      printf("\n%d is Pronic No. ",n);
    else
      printf("\n%d is NOT Pronic No. ",n);
}
