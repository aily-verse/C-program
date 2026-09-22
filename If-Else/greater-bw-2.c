//WAP to check greater between 2 no.
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the two numbers = ");
    scanf("%d%d",&a,&b);
    if(a>b)
      printf("1st no. %d is greater",a);
    else if(a==b)
      printf("Both are equal");
    else
      printf("2nd no. %d is greater",b);

}
