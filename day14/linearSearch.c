#include <stdio.h>

int main() {
    int arr[5], i, key;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}