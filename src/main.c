#include <stdio.h>
#include "headers/questionset.h"

int main(int argc, char **argv)
{

    const int TOTAL_QUESTIONS = 5;
    const int TOTAL_OPTIONS = 4;
    int score = 0;
    char name[50];

    printf("\n<<<< Welcome To Quizzer >>>>\n\n");

    printf("<<< Enter You Name: ");
    scanf("%49s", name);
    printf("\n");

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Q%d >>> %s\n", i + 1, quiz_questions[i].question);
        for (int j = 0; j < TOTAL_OPTIONS; j++)
        {
            printf("[%d] > %s\n", j, quiz_questions[i].options[j]);
        }

        int chosen = -1;

        while (1)
        {
            printf("Choose Option (0-%d): ", TOTAL_OPTIONS - 1);
            if (scanf("%d", &chosen) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ;
                continue;
            }
            if (chosen >= 0 && chosen < TOTAL_OPTIONS)
            {
                break;
            }
            else
            {
                printf("Invalid option! Please choose between 0 and %d.\n", TOTAL_OPTIONS - 1);
            }
        }

        if (chosen == quiz_questions[i].correctOptionIndex)
        {
            score += 1;
        };

        printf("\n");
    };

    printf("Quiz Completed, %s! Your Score Is %d/%d\n", name, score, TOTAL_QUESTIONS);

    return 0;
}
