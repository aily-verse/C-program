//WAP to check whether the no is autopolymorphic no. or not 
#include<stdio.h>
void main(){
    int x;
    printf("Enter the no = ");
    scanf("%d",&x);
    if(x==0)
      printf("%d is neutral no",x);
    else if((x*x)%10==x || (x*x)%100==x)
      printf("%d is autopolymorphic no",x);
    else
    printf("%d is not autopolymorphic no",x);
}
