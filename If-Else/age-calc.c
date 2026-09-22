//age calculation
#include<stdio.h>
void main(){
    int x;
    printf("Enter your age = ");
    scanf("%d",&x);
    if(x>=0 && x<=6)
      printf("you are an infant");
    else if(x>6 && x<=12)
      printf("you are a child");
    else if(x>12 && x<=18)
      printf("you are a teen");
    else if(x>18 && x<=35)
      printf("you are a young");
    else if(x>35 && x<=60)
      printf("you are a middle age");
    else if(x>60 && x<=100)
      printf("you are an old age ");
    else if(x>100)
      printf("Go to hell!!!!!! ");
    else 
      printf("not applicable ");   
}
