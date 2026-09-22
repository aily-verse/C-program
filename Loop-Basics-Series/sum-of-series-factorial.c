/*
sum of series=1,2/2!,3/3!,4/4!,.....n
*/
#include<stdio.h>
void main(){
    int i,n,f=1;
    float s=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d/%d!\n",i,i);
        f=f*i;
        s=s+(float)i/(float)f;
    }
    printf("\nSum = %.3f",s);
}
