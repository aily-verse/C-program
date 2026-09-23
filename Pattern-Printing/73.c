/*
39714
9714
714
14
4
*/
#include <stdio.h> 
void main() {     
    long n = 39714, i=1;     
    for(i=10;i<n;i*=10);      
        for (i=i/10; n>0; i/=10)     
        {         
            printf("%d\n", n);         
            n%=i;     
        }  
} 