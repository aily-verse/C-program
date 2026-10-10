//WAP to calc. area & perimeter of Rect., cuboid, cube   1st type
#include<stdio.h>
void input();
void recta();
void cuboid();
void cube();
int len,br,ar,pr,h;
void main(){
    input();
    recta();
    cuboid();
    cube();
}
void input(){
    printf("Enter the length, width and height for a rect, cube, cuboid = ");
    scanf("%d%d%d",&len,&br,&h);
}
void recta(){
   ar=len*br;
   pr=2*(len+br);
   printf("Area = %d and Perimeter = %d of a rectangle",ar,pr);
}
void cuboid(){
    ar=2*(len*br+len*h+br*h);
    pr=len*br*h;
    printf("\nArea = %d and Volume of a cuboid = %d",ar,pr);
}
void cube(){
    ar=6*len*len;
    pr=len*len*len;
    printf("\nArea = %d and Volume of a cube = %d",ar,pr);
}
