#include<stdio.h>
#include <stdlib.h> //massive toolbox of genral purpose utilities. it contains rand() & srand().
#include <time.h> //givees access to the computer's internal system clock. we use this to make sure our random numbers generated different every time we run the game.
int main(){

    // 1. Seed the random number generator with the current time
    srand(time(0)); //srand does mathematical calculations to the number generated or taken by time 0 which gives real time every second time changes so it will change everytime.

    // 2. Generate the number.
    // rand() % 100 gives a number from 0 to 99
    // + 1 shifts the range to 1 to 100
    int randomNumber = (rand() % 100) + 1;
    // printf("Random Number: %d\n", randomNumber);

    // 3. Syntax for loop and working of the game.
    int guessed_number;
    int guesses=0;
    printf("\t\t\t\t   Hello there !!!\n");
    printf(" \t\t\tWelcome to the number geussing game\n\n ");

    do {
    printf("Please enter the number you guessed :\n");
    scanf("%d",&guessed_number);
    if(guessed_number==randomNumber){
        printf("Hurray , Guessed it right , You won.\n");
    }
    else if(guessed_number<randomNumber){
        printf("You guessed it lower , its bigger than this one (: \n");
    }
    else if(guessed_number>randomNumber){
        printf("You guessed it higher , its lower than this one (:\n");
    }
        guesses++;
}
while (guessed_number!=randomNumber);

printf("Guesses taken = %d",guesses);

    return 0;
}