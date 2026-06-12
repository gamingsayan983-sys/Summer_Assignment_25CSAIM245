#include<stdio.h>
int main()
{
    int n,r,m,s=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(m==s)
    {
        printf("palindrome number");
    }
    else
    {
        printf("Not palindrome number");
    }
}