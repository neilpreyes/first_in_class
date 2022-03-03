#include <stdio.h> //input/output library
#include <stdlib.h> //random number generator
#include <time.h> //time/date utilities
#include <stdbool.h>//boolean variable

int main(){
    int choice = 0;
    int maxNum = 9;
    char x;

    //createFile();
    //newMax("5");
    //newMax("6");
    //getMax();

    do{
        //maxNum = getMax();
        printf("\n\nPress 1 to play a game");
        printf("\nPress 2 to change the max number");
        printf("\nPress 3 to quit: \n");
        scanf("%d", &choice);

        if(choice == 1){
            int guess, try;
            srand(time(NULL));
            int num = (rand()%(maxNum)) + 1;

            printf("\nThe number between 1 and %d", maxNum);
            printf(" has been chosen. Please make a guess: \n");
            scanf(" %c", &x);
            //scanf("%d", &guess);
            guess = x - '0';
            try = 1;
            //printf("The number is %d", num);
            do{
                if(try == 1){
                    if(x == 'q'){
                        printf("\nThank you for trying!\n");
                    }else if(guess == num){
                        printf("\nCorrect choice! Returning to main menu");
                    }else{
                        int difference = guess - num;
                        if(difference > 0){
                            printf("\nYou guessed too high. Please try again.");
                        }else{
                            printf("\nYou guessed too low. Please try again.");
                        }
                    }
                    try++;
                }else{
                    printf("\n\nPlease make your next guess: \n");
                    scanf(" %c", &x);
                    //scanf("%d", &guess);
                    guess = x - '0';
                    if(x == 'q'){
                        printf("\nThank you for trying!\n");
                    }else if(guess == num){
                        printf("\nCorrect choice! Returning to main menu");
                    }else{
                        int difference = guess - num;
                        if(difference > 0){
                            printf("\nYou guessed too high. Please try again.");
                        }else{
                            printf("\nYou guessed too low. Please try again.");
                        }
                    }

                    try++;
                }
            }while(guess != num && x != 'q');

        }else if(choice == 2){
            /*
            char *newNum;
            bool limit = false;

            do{
                printf("Please input a new integer between 1 and 10");
                scanf("%s", newNum);

                if(newNum > 1 && newNum <= 10){
                    limit = true;
                }
            }while(limit == false);

            newMax(newNum); */
            

        }else if(choice == 3){
            printf("\n Thank you for playing!");
        }else{
            printf("\n Invalid choice. Please try again.");
        }

    }while(choice != 3);

    return 0;
}

/*
int createFile(void){
    FILE * fPointer;
    fPointer = fopen("maxNum.txt", "w+");
    fputs("10", fPointer);

    fclose(fPointer);

    return 0;
}

int newMax(char *num){
    FILE * fPointer;
    fPointer = fopen("maxNum.txt", "a");
    
    fprintf(fPointer, "\n");
    fprintf(fPointer, num);
    
    fclose(fPointer);

    return 0;
}

int getMax(void){
    FILE * fPointer;
    fPointer = fopen("maxNum.txt", "r");
    char singleLine[150];
    char* num;

    while(!feof(fPointer)){
        fgets(singleLine, 150, fPointer);
        num = singleLine;
    }

    //printf("\nThis is the max num: ");
    //printf("%s", num);

    int newMax = atoi(num);


    fclose(fPointer);
    return newMax;
}
*/