/*
Twisted prime 
17=71------------->both prime
18=81------->not prime not twisted
*/
#include<stdio.h>
void main()
{
    int i,n,c=0,rem,rev=0,g=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    if(n<=0){
        printf("Wrong Input");
    }
    else{
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
            c++;
            }
        }
        if(c==2)
        printf("\n%d is Prime No. ",n);
        else
        printf("\n%d is NOT Prime No. ",n);
        for(x=n;n>0;n=n/10)
        {   
            rem=n%10;
            rev=rev*10+rem;
        }
        for(i=1;i<=rev;i++){
            if(rev%i==0)
            {
            g++;
            }
        }
        if(g==2)
        printf("\n%d is Prime No. ",rev);
        else
        printf("\n%d is NOT Prime No. ",rev);
        if(c==2 && g==2){
            printf("\nHence %d and %d are twisted prime numbers.",x,rev);
        }
        else{
            printf("\nHence %d and %d are not twisted prime numbers.",x,rev);
        }
    }
}
