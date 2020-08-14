#include <stdio.h>

#define SECRET_NUMBER 42

int main(){
  printf("********************************\n");
  printf("* Welcome to our guessing game *\n");
  printf("********************************\n");

  int guess;
  int guesshit;
  int count_attempt = 1;

  while(SECRET_NUMBER != guess){

    printf("\nAttempt %d\n", count_attempt);
    printf("\nWhat is guess for the numer?\n");
    scanf("%d", &guess);
    printf("\n");

    guesshit = (guess == SECRET_NUMBER);

    if(!guesshit){
      int guess_greater = guess > SECRET_NUMBER;


      if(guess_greater){

        printf("*******************************************\n");
        printf("The guess is greater than the secret number\n");
        printf("*******************************************\n");
      }else{
        printf("****************************************\n");
        printf("The guess is less than the secret number\n");
        printf("****************************************\n");
      }
    }

    count_attempt++;
  }

  printf("**********\n");
  printf("Game over!\n");
  printf("**********\n");

}