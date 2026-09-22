//WAP to print 1 4 9 16 25 ...n &sum    ANOTHER WAY
#include<stdio.h>
#include<math.h>
void main(){
    int i,n,s=0,P;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        P=pow(i,2);
        printf("%d\n",P);
        s=s+P;
    }
    printf("sum=%d",s);
}
