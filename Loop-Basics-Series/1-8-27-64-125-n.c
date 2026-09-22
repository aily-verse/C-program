// 1 8 27 64 125......n       1*1*1 2*2*2 3*3*3....n*n*n
#include<stdio.h>
void main()
{
    int i,n,s=0,p;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=i*i*i;
        printf("%d ",p);
        s=s+p;
    }
    printf(" = %d",s);
}
