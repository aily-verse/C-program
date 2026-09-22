//Find out the mode element within an array.    NOT PERFECT
#include<stdio.h>
void main()
{
    int i,n,c=0,max=0,mode,j;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    printf("Array List = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>max){
            max=c;
            mode=a[i];
        }
    }
    if(max==1){
            printf("No Mode");
        }
    else
    printf("Mode = %d",mode);
}