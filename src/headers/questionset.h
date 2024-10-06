
#ifndef QUESTIONSET_H
#define QUESTIONSET_H

struct QuestionSet
{
    char question[256];
    char options[4][100];
    int correctOptionIndex;
};


extern struct QuestionSet quiz_questions[5];

#endif
