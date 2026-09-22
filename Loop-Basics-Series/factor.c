//Factor of a no.    6  --> 1,2,3,6 
#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("factors of the number = ");
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d, ",i);
        }
    }
}
