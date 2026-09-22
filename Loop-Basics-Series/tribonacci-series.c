//1 1 1 3 5 9 17 31 ....n         Tribonacci series
#include<stdio.h>
void main(){
    int a=1,b=1,c=1,d,n,i;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("%d\n%d\n%d\n",a,b,c);
    for(i=1;i<=n-3;i++){
        d=a+b+c;
        printf("%d\n",d);
        a=b;
        b=c;
        c=d;
    }
} 
