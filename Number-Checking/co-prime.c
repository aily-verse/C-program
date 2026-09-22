/*
Co-prime    gcd should be 1
5,1---->gcd---->1
5,8---->gcd---->1
*/
#include<stdio.h>
void main()
{
    int i,a,b,gcd;
    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);
    if(a<=0 || b<=0)
        printf("Wrong Input");
    else{
        for(i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            gcd=i;
        }
        if(gcd==1)
            printf("%d and %d are Co-Prime Numbers",a,b);
        else
            printf("%d and %d are not Co-Prime Numbers",a,b);
    }
}
