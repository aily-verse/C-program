//calc. area and perimeter of cuboid
#include<stdio.h>
void main(){
    int l,w,h,v,a;
    printf("Enter the length, width and height = ");
    scanf("%d%d%d",&l,&w,&h);
    a=2*(l*w+l*h+w*h);
    v=l*w*h;
    printf("Area = %d Volume = %d",a,v);
}
