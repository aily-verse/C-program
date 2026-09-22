/*
Kaprekar no. 
45,99,297
45^2=2025   25+20=45
297^2=88209=209+88=297
99^2=9801=01+98=99
*/
#include<stdio.h>
#include<math.h>
void main(){
    int n,i,p=0,x,L,R,rem=0,c=0,div=1;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n<=0){
        printf("Wrong Input");
    }
    else{
        p=pow(n,2);
        printf("%d^2 = %d",n,p);
        for(x=n;n>0;n=n/10){
            rem=n%10;
            c++;
        }
        printf("\nDigits = %d",c);
        for(i=1;i<=c;i++){
            div=div*10;
            L=p/div;  //202  //20
            R=p%div;    //5   //25     for 45 input
        }
        if((L+R)==x){
            printf("\nKaprekar No.");
        }
        else{
            printf("\nNot Kaprekar No.");
        }
    }
}
