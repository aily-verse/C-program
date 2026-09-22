// wap to print 1- n odd term and calc. and the sum
#include<stdio.h>
void main(){
    int n,i,s;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        printf("%d\n",i);
        s=s+i;
    }
    printf("Total sum is %d",s);
}
