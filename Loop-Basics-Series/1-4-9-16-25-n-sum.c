//WAP to print 1 4 9 16 25 ...n &sum
#include<stdio.h>
void main(){
    int i,n,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i*i);
        s=s+(i*i);
    }
    printf("sum=%d",s);
}
