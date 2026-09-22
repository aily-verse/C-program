//WAP to print 1 to n even terms
#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        printf("%d\n",i);
    }
}
