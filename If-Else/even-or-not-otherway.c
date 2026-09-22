//WAP to check a no. is even or not    ANOTHER WAYY
#include<stdio.h>
void main(){
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    if(x==0)
      printf("%d is neutral no.",x);
    else if(x%2==0)
      printf("%d is Even no.",x);
    else
      printf("%d is odd no.",x);
}
