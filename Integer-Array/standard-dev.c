//Find out the standard deviation element within an array.
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    float sum=0,mean,sd=0;
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
    }
    //Mean
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/n;
    //Standard Deviation
    for(i=0;i<n;i++)
    {
        sd=sd+(a[i]-mean)*(a[i]-mean);
    }
    sd=sqrt(sd/n);
    printf("\nMean = %.2f",mean);
    printf("\nStandard Deviation = %.2f",sd);
}