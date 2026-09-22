//convert second to day
#include<stdio.h>
void main(){
    int s,m,h,d;
    printf("Enter the second = ");
    scanf("%d",&s);
    d=s/86400;       //1 day = 86400 sec
    s=s%86400;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("Day = %d Hour = %d Minute = %d Second = %d",d,h,m,s);
}
