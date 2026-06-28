#include <stdio.h>

int main() {
    char str[100];
    int i, count[256] = {0};
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count[(int)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Occurrences: %d\n", maxCount);

    return 0;
}