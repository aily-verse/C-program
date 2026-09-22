/*
_ _ _ *
_ _ * _ * _
_ * _ * _ * _
* _ * _ * _ *
_ * _ * _ * _
_ _ * _ * _
_ _ _ *

_ _ _ 1
_ _ 1 _ 2 _
_ 1 _ 2 _ 3 _
1 _ 2 _ 3 _ 4
_ 1 _ 2 _ 3 _
_ _ 1 _ 2 _
_ _ _ 1
*/
#include<stdio.h>
void main(){
    int i,j,sp;
    for(i=1;i<=4;i++){
        for(sp=3;sp>=i;sp--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=3;i>=1;i--){
        for(sp=i;sp<=3;sp++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}