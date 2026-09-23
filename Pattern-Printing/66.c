//As u wish pyramid 
#include <stdio.h>
void main(){
    int i, j, n, sp,k;     
    printf("Enter the number of rows in pyramid of stars you wish to see = ");    
    scanf("%d",&n);     
    sp = n;     
    for ( i = 1 ; i <= n ; i++ ){       
        for ( j = 1 ; j < sp ; j++ )          
            printf(" ");         
            sp--;        
            for ( k= 1 ; k<= 2*i - 1 ; k++ )          
                printf("*");         
    printf("\n");    
    }  
} 