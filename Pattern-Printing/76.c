/*
11111
0000
111
00
1
*/
#include <stdio.h>  
void main() 
{     
    int i, j;     
    for(i=5;i>=1;i--)     
    {         
        for(j=1;j<=i;j++)         
        {             
            printf("%d",i%2);         
        }         
        printf("\n");     
    }       
} 