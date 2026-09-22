/*
sum = 1 1 1 3 5 9 17 31...n
*/
#include<stdio.h>
void main(){
    int a=1,b=1,i,c=1,n,d,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    if(n<=0){
        printf("Wrong input");
    }
    else if(n==1){
        printf("%d",a);
        s=a;
        printf("\nsum = %d",s);
    }
    else if(n==2){
        printf("%d %d",a,b);
        s=a+b;
        printf("\nsum = %d",s);
    }
    else{
        if(n==3)
        {
        printf("%d %d %d",a,b,c);
        s=a+b+c;
        }
        else
        {
            printf("%d %d %d",a,b,c);
            s=a+b+c;
            for(i=1;i<=n-3;i++){
            d=a+b+c;
            printf(" %d",d);
            s=s+d;
            a=b;
            b=c;
            c=d;
        }
    }
        printf("\nsum = %d",s);
    }
}
