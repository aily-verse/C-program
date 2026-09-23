/*
1234
2341
3421
4321
*/
#include<stdio.h>
void main() 
{   
    int i,j,k;   
    for(i=1;i<=4;i++)   
    {     
        k = i-1;     
        for(j=i;j<i+4;j++)     
        {       
            if(j<=4)       
            {         
                printf("%d",j);       
            }       
            else       
            {         
                printf("%d",k--);       
            }     
        }     
        printf("\n");   
    }    
} 