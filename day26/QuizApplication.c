#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("a) 5\nb) 6\nc) 7\nd) 8\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'c' || ans == 'C')
        score++;

    printf("\n3. Which language is used for C programming?\n");
    printf("a) Python\nb) C\nc) Java\nd) HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}