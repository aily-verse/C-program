//find out the max. element within the array(in case of negative no. it not possible)
    #include<stdio.h>
    void main()
    {
        int i,n,max=0,j;
        printf("Enter the Range = ");
        scanf("%d",&n);
        int a[n]; //array declaration
        //input
        for(i=0;i<n;i++)
        {
            printf("Enter the No. = ");
            scanf("%d",&a[i]);
        }
        //print
        printf("\nArray List = \n");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
            if(a[i]>max)
            {
                max=a[i];
                j=i;
            }
        }
        printf("\n Max. Element = %d Index= %d position = %d",max,j,j+1);
        
    }