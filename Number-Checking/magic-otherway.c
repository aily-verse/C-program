/*Magic No.       ANOTHER WAY
  19,28,37,46,55,73,181,172,163
  172   -> 2+7+1=10
  10 --> 0+1   =1
*/
#include<stdio.h>
void main()
{
    int n,x,rem,s=0,s1=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    if(n<=0)
     printf("Wrong Input ");
    else
    {
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    for(;s>0;s=s/10)
    {
        rem=s%10;
        s1=s1+rem;
    }
    if(s1==1)
      printf("%d is Magic No. ",x);
    else
      printf("%d is NOT Magic No. ",x);
    }
}
