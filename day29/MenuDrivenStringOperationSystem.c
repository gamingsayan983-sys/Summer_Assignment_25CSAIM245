#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i, length;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    while (1) {
        printf("\n===== Menu-Driven String Operations =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Length = %lu\n", strlen(str));
            break;

        case 2:
            length = strlen(str);
            printf("Reversed String: ");
            for (i = length - 1; i >= 0; i--)
                printf("%c", str[i]);
            printf("\n");
            break;

        case 3:
            printf("Uppercase String: ");
            for (i = 0; str[i] != '\0'; i++) {
                ch = str[i];
                if (ch >= 'a' && ch <= 'z')
                    ch = ch - 32;
                printf("%c", ch);
            }
            printf("\n");
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}