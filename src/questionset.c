#include "headers/questionset.h"

struct QuestionSet quiz_questions[30] = { 
    // Geography Questions
    {
        .questionNo = 1,
        .question = "What is the capital of France?",
        .options = {
            "Berlin",
            "Madrid",
            "Paris",
            "Rome"},
        .correctOptionIndex = 2,
        .category = GEOGRAPHY
    },
    {
        .questionNo = 2,
        .question = "Which planet is known as the Red Planet?",
        .options = {
            "Earth",
            "Mars",
            "Jupiter",
            "Saturn"},
        .correctOptionIndex = 1,
        .category = GEOGRAPHY
    },
    {
        .questionNo = 3,
        .question = "Which continent is the Sahara Desert located in?",
        .options = {
            "Asia",
            "Africa",
            "North America",
            "Australia"},
        .correctOptionIndex = 1,
        .category = GEOGRAPHY
    },
    {
        .questionNo = 4,
        .question = "What river is the longest in the world?",
        .options = {
            "Amazon",
            "Nile",
            "Yangtze",
            "Mississippi"},
        .correctOptionIndex = 1,
        .category = GEOGRAPHY
    },
    {
        .questionNo = 5,
        .question = "Which country has the largest population?",
        .options = {
            "India",
            "USA",
            "China",
            "Indonesia"},
        .correctOptionIndex = 2,
        .category = GEOGRAPHY
    },

    // History Questions
    {
        .questionNo = 1,
        .question = "Who wrote the play 'Romeo and Juliet'?",
        .options = {
            "Charles Dickens",
            "Mark Twain",
            "William Shakespeare",
            "J.K. Rowling"},
        .correctOptionIndex = 2,
        .category = HISTORY
    },
    {
        .questionNo = 2,
        .question = "In which year did the Titanic sink?",
        .options = {
            "1905",
            "1912",
            "1920",
            "1935"},
        .correctOptionIndex = 1,
        .category = HISTORY
    },
    {
        .questionNo = 3,
        .question = "Who was the first President of the United States?",
        .options = {
            "George Washington",
            "Thomas Jefferson",
            "Abraham Lincoln",
            "John Adams"},
        .correctOptionIndex = 0,
        .category = HISTORY
    },
    {
        .questionNo = 4,
        .question = "What ancient civilization built the pyramids?",
        .options = {
            "Maya",
            "Egyptians",
            "Romans",
            "Greeks"},
        .correctOptionIndex = 1,
        .category = HISTORY
    },
    {
        .questionNo = 5,
        .question = "During which war was the Battle of Gettysburg fought?",
        .options = {
            "World War I",
            "World War II",
            "Civil War",
            "Revolutionary War"},
        .correctOptionIndex = 2,
        .category = HISTORY
    },

    // Math Questions
    {
        .questionNo = 1,
        .question = "What is 5 + 7?",
        .options = {
            "10",
            "11",
            "12",
            "13"},
        .correctOptionIndex = 2,
        .category = MATH
    },
    {
        .questionNo = 2,
        .question = "What is 9 * 9?",
        .options = {
            "72",
            "81",
            "90",
            "99"},
        .correctOptionIndex = 1,
        .category = MATH
    },
    {
        .questionNo = 3,
        .question = "What is the square root of 64?",
        .options = {
            "6",
            "7",
            "8",
            "9"},
        .correctOptionIndex = 2,
        .category = MATH
    },
    {
        .questionNo = 4,
        .question = "What is 15 - 6?",
        .options = {
            "7",
            "8",
            "9",
            "10"},
        .correctOptionIndex = 1,
        .category = MATH
    },
    {
        .questionNo = 5,
        .question = "What is 12 / 4?",
        .options = {
            "2",
            "3",
            "4",
            "5"},
        .correctOptionIndex = 1,
        .category = MATH
    }
};
