//calc buzz no. or not
#include<stdio.h>
void main(){
    int x;
    printf("Enter the number = ");
    scanf("%d",&x);
    if(x%7==0 && x%10==7)
      printf("%d is a buzz number",x);
    else
      printf("%d is a not buzz number",x);
}
