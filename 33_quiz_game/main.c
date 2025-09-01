#include <stdio.h>
#include <ctype.h> // For toupper()

int main() {
    
    // QUIZ GAME

    // Each question can hold 100 characters, but you can change it of course!
    char questions[][100] = {"What is the largest planet in the solar system?",
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Mercury\nB. Venus\nC. Earth\nD.Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};
    
    /*
    printf("%s\n", questions[0]);
    printf("%s\n", options[0]);
    printf("%c", answerKey[0]);

    // Each question is comma seperated

    printf("%s\n", questions[1]);
    printf("%s\n", options[1]);
    printf("%c", answerKey[1]);

    printf("%s\n", questions[2]);
    printf("%s\n", options[2]);
    printf("%c", answerKey[2]);
    
    printf("%s\n", questions[3]);
    printf("%s\n", options[3]);
    printf("%c", answerKey[3]);
    */

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***")

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        // User input
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        // Score Evaluation
        if(guess == answerKey[i]){
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n")
        }
    }

    printf("\nYour score is %d out of %d points\n", score, questionCount);

    return 0;
}