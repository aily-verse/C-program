//calc. area and volume of cube.
#include<stdio.h>
void main(){
    int len,ar,vol;
    printf("Enter the length = ");
    scanf("%d",&len);
    ar=6*len*len;
    vol=len*len*len;
    printf("Area = %d Volume = %d",ar,vol);
}
