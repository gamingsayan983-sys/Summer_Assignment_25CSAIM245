#include <stdio.h>

int main() {
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = (a > b ? a : b); ; i++) {
        if(i % a == 0 && i % b == 0) {
            printf("LCM = %d", i);
            break;
        }
    }

    return 0;
}