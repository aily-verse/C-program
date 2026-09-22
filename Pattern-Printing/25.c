/*
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/

/*
    #include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=7;i=i+2){
        for(sp=3;sp>=i;sp--){                    WRONG!!!! HERE WE CAN'T HANDLE THE SPACE LOOP!!!!
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/

#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=3;sp>=i;sp--)
        {
           printf("  ");
        }
        for(j=1;j<=(i*2)-1;j++)
        {
           printf("%d ",j);
        }
        printf("\n");
    }
}