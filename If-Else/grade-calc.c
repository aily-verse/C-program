//grade calc.
#include<stdio.h>
void main(){
    int a,b,c,d,t,avg;
    printf("Enter the maths,chem,bio,cs marks = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    t=a+b+c+d;
    avg=t/4;
    if(avg>=0 && avg<40)
      printf("Grade D");
    else if(avg>=40 && avg<60)
      printf("Grade C");
    else if(avg>=60 && avg<80)
      printf("Grade B");
    else if(avg>=80 && avg<90)
      printf("Grade A");
    else 
      printf("Grade AA");   
}
