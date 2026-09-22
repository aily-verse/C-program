//WAP to check greatest among 3 no.
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the 3 no. = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b==c)
      printf("1st no. %d is greater and 2nd,3rd are equal",a);
    else if(b>a && a==c)
      printf("2nd no. %d is greater and 1st,3rd are equal",b);
    else if(c>a && a==b)
      printf("3rd no. %d is greater and 1st,2nd are equal",c);
    else if(a<b && b==c)
      printf("1st no. %d is lowest and 2nd,3rd are equal and greatest",a);
    else if(b<a && a==c)
      printf("2nd no. %d is lowest and 1st,3rd are equal and greatest",b);
    else if(c<a && a==b)
      printf("3rd no. %d is lowest and 1st,2nd are equal and greatest",c);
    else if(a>b && a>c)
      printf("1st no. %d is greatest",a);
    else if(b>c)
      printf("2nd no. %d is greatest",b);
    else if(a==b && b==c)
      printf("All are equal");
    else 
      printf("3rd no. %d is greatest",c);
}
