//WAP to count how many vowel,consonant and space present within a string.
#include<stdio.h>
void main()
{
    char x[20];
    int v=0,c=0,s=0,sp=0;
    printf("Enter the String = ");
    gets(x);
    printf("String = ");
    for(int i=0;x[i]!='\0';i++)
    {
        printf("%c",x[i]);
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U'){
            v++;
        }
        else if(x[i]==' '){
            s++;
        }
        else if(x[i]>=65 && x[i]<=90 || x[i]>=97 && x[i]<=122){
            c++;
        }
        else{
            sp++;
        }
    }
    printf("\nVowel = %d\nSpace = %d\nConsonant = %d\nOther = %d",v,s,c,sp);
}