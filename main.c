#include <stdio.h>

#define SECRET_NUMBER 42

int main(){
  printf("********************************\n");
  printf("* Welcome to our guessing game *\n");
  printf("********************************\n");

  int guess;
  int notguesshit;
  int countattempt = 0;
  int guessnegativenumber;
  int points = 1000;

  while(1){


    printf("\nWhat is guess for the numer?\n");
    scanf("%d", &guess);
    printf("\n");


    guessnegativenumber = guess < 0;
    int guessgreater = guess > SECRET_NUMBER;

    if(SECRET_NUMBER == guess) break;
    if(guessnegativenumber){
      printf("\n*********************************\n");
      printf("\nYou cannot guess negative numbers");
      printf("\n*********************************\n");
      continue;
    }
      else if(guessgreater){

        printf("*******************************************\n");
        printf("The guess is greater than the secret number\n");
        printf("*******************************************\n");
      }else{
        printf("****************************************\n");
        printf("The guess is less than the secret number\n");
        printf("****************************************\n");
      }

    countattempt++;

    int pointslost = (guess - SECRET_NUMBER) / 2;
    points += points - pointslost;
  }
  printf("\n\n\n*****************************\n");
  printf("*****You win in %d attempt****\n", countattempt);
  printf("*****You win %d points*****\n", points);
  printf("\n*****************************\n\n\n\n");

  printf("**********\n");
  printf("Game over!\n");
  printf("**********\n");
}