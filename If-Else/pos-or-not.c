//WAP to check a no. is positive or not
#include<stdio.h>
void main(){
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    if(x>0)
      printf("%d is positive no.",x);
    else if(x==0)
      printf("%d is neutral no.",x);
    else
      printf("%d is negative no.",x);
}
