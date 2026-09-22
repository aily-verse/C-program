// 1 4 9 16 25 ---n       1*1 2*2 3*3...n*n
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,p;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=pow(i,2);
        printf("%d ",p);
        s=s+p;
    }
    printf(" = %d",s);
}
