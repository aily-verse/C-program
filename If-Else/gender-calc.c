//gender calculation
#include<stdio.h>
void main(){
    char x;
    printf("Enter your gender initial = ");
    scanf("%c",&x);
    if(x=='F'|| x=='f')
      printf("Female");
    else if(x=='M'|| x=='m')
      printf("Male");
    else if(x=='T'|| x=='t')
      printf("Transgender"); 
    else
      printf("N/A");
}
