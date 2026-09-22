//2 5 8 11 14  17 ---n          gap 3 
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+3)
    {
        printf("%d ",i);
    }
}
