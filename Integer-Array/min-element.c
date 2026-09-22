//Find out the the minimum element within an array.
#include<stdio.h>
void main()
{
    int i,n,min,j;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //print
    min=a[0];
    j=0;
    printf("\nArray List = \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]<min)
        {
            min=a[i];
            j=i;
        }
    }
    printf("\n Min. Element = %d Index= %d position = %d",min,j,j+1);
}