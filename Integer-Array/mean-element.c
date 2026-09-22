//Find out the mean element within an array.
#include<stdio.h>
void main()
{
    float mean;
    int i,n,s=0;
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
      s+=a[i];
    }
    mean=s/n;
    printf("\nMean = %.2f",mean);
}