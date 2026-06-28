#include <stdio.h>

int main() {
    char str[100];
    int i, j, found;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0'; i++) {
        found = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0)
            printf("%c", str[i]);
    }

    return 0;
}