#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            longest[j++] = str[i];
        } else {
            if (j > max) {
                max = j;
                longest[j] = '\0';
            }
            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}