#include <stdio.h>

int main()
{
    int n, temp, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }

    if(sum == n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}