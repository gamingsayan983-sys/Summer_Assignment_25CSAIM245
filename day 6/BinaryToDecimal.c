#include <stdio.h>

int main()
{
    int binary, rem, decimal = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * place;
        place = place * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d", decimal);

    return 0;
}