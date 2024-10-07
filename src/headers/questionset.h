#ifndef QUESTIONSET_H
#define QUESTIONSET_H

enum Category {
    MATH,
    GEOGRAPHY,
    HISTORY,
    TOTAL_CATEGORIES
};

struct QuestionSet {
    int questionNo;
    char question[256];
    char options[4][100];
    int correctOptionIndex;
    enum Category category; 
};

extern struct QuestionSet quiz_questions[30];

#endif
