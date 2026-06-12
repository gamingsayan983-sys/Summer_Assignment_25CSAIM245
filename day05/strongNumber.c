#include <stdio.h>

int main()
{
    int n, temp, r, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        r = temp % 10;
        fact = 1;

        for(i = 1; i <= r; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
    {
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }
    return 0;
}