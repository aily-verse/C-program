//Smith no.     666=6+6+6=18    2/666=3/333=3/111=37    2+3+3+3+7=18
#include<stdio.h>
void main()
{
    int n, x, i = 2, sof = 0, s = 0, t, temp;
    printf("Enter the number = ");
    scanf("%d", &n);
    x = n; 
    while(i <= n)
    {
        if(n % i == 0)
        {
            temp = i;
            while(temp != 0)
            {
                sof += temp % 10;   // add digits of factor
                temp /= 10;
            }
            n /= i;
        }
        else
            i++;
    }
    t = x;
    while(t != 0)
    {
        s += t % 10;
        t /= 10;
    }
    if(s == sof)
        printf("%d is a Smith Number.", x);
    else
        printf("%d is not a Smith Number.", x);
}