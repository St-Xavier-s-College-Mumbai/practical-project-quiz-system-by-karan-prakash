#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/questionset.h"

void take_quiz(int category);
void view_scores();

  const char *categories[] = {
        "Math",
        "Geography",
        "History"
    };

int main() {

  

    int choice;

    while (1) {
        printf("\n<<<< Welcome To Quizzer >>>>\n");
        printf("1. Take Quiz\n");
        printf("2. View Scores\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (choice) {
            case 1:
                printf("\nChoose Quiz Category:\n");

                for (int c = 0; c < 3; c++) {
                    printf("%d. %s\n", c+1, categories[c]);
                }

                printf("Choose an option: ");
                
                int category;
                if (scanf("%d", &category) != 1 || category < 1 || category > 3) {
                    printf("Invalid category! Please choose between 1 and 3.\n");
                    continue;
                }
                take_quiz(category - 1);
                break;
            case 2:
                view_scores();
                break;
            case 3:
                printf("Exiting the quiz. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid option! Please choose 1, 2, or 3.\n");
        }
    }

    return 0;
}

void take_quiz(int category) {
    const int TOTAL_QUESTIONS = 5; 
    int score = 0;
    char name[50];
    
    printf("\n<<< Enter Your Name: ");
    scanf("%49s", name);
    printf("\n");

    for (int i = 0; i < sizeof(quiz_questions) / sizeof(quiz_questions[0]); i++) {
        if (quiz_questions[i].category == category) {
            printf("Q%d >>> %s\n", quiz_questions[i].questionNo, quiz_questions[i].question);
            for (int j = 0; j < 4; j++) {
                printf("[%d] > %s\n", j, quiz_questions[i].options[j]);
            }

            int chosen = -1;
            while (1) {
                printf("Choose Option (0-3): ");
                if (scanf("%d", &chosen) != 1) {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n'); // Clear input buffer
                    continue;
                }
                if (chosen >= 0 && chosen < 4) {
                    break;
                } else {
                    printf("Invalid option! Please choose between 0 and 3.\n");
                }
            }

            if (chosen == quiz_questions[i].correctOptionIndex) {
                score += 1;
            }
            printf("\n");
        }
    }

    printf("Quiz Completed, %s! Your Score Is %d/%d\n", name, score, TOTAL_QUESTIONS);
    FILE *file = fopen("scores.txt", "a");
    if (file) {
        fprintf(file, "%s: %d/%d (%s)\n", name, score, TOTAL_QUESTIONS, categories[category]);
        fclose(file);
    } else {
        printf("Error saving score.\n");
    }
}

void view_scores() {
    FILE *file = fopen("scores.txt", "r");
    if (file) {
        char line[256];
        printf("\n<<< Scores >>>\n");
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("No scores available.\n");
    }
}
