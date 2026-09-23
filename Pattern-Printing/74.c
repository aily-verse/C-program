/*
1
232
34543
4567654
567898765
*/
#include<stdio.h>
void main() {     
    int i,j,k;     
    for(i=1;i<=5;i++)     
    {         
        j=i;         
        for(k=1;k<=i;k++)         
        {             
            printf("%d",j++);         
        }         
        j-=2;         
        for(k=j;k>=i;k--)         
        {             
            printf("%d",j--);         
        }                 
        printf("\n"); 
    }
}