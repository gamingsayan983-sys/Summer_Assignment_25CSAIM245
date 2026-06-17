#include <stdio.h>

int main() {
    int arr[5], i, num, count = 0;

    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}