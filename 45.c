#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int luckyNumber, guess, attempts = 5;

    // Seed random number generator and generate a random lucky number (1 to 100)
    srand(time(0));
    luckyNumber = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a lucky number between 1 and 100.\n");
    printf("You have %d attempts to guess it correctly.\n\n", attempts);

    // Game loop
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == luckyNumber) {
            printf("Congratulations! You guessed the lucky number %d correctly!\n", luckyNumber);
            break;
        } else if (guess > luckyNumber) {
            printf("Too high! Try a smaller number.\n");
        } else {
            printf("Too low! Try a larger number.\n");
        }

        // Use a conditional operator to display attempts left
        printf("%d %s remaining.\n\n", attempts - i, (attempts - i == 1) ? "attempt" : "attempts");

        // Check if the user is out of attempts
        if (i == attempts) {
            printf("Sorry! You've used all your attempts. The lucky number was %d.\n", luckyNumber);
        }
    }

    printf("Thank you for playing the Guessing Game!\n");
    return 0;
}
