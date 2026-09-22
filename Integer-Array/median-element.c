//Find out the median element within an array.
#include<stdio.h>
void main()
{
    int i,n,b,j;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //sorting
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    //output
    printf("Array List = ");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    if(n%2==1)
      printf("Median Element = %d",a[n/2]);
    else
    {
         
        printf("Median Element = %.2f",(a[n/2]+a[(n/2)-1])/2.0);
    }
}