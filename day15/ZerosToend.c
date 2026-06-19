#include <stdio.h>

int main() {
    int n, arr[100], temp[100];
    int j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store non-zero elements first
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    // Add zeroes at the end
    while(j < n) {
        temp[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}