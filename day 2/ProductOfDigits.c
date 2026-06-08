#include<stdio.h>
int main()
{
    int n,r,pd=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pd=pd * r;
        n=n/10;
    }
    printf("product of digits of a number is %d",pd);
    return 0;
}