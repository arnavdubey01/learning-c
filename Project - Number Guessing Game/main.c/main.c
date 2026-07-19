#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random = rand() % 100 + 1;
    int guess;
    int number_of_guesses = 0;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess > random) {
            printf("Lower!\n");
        }
        else if (guess < random) {
            printf("Higher!\n");
        }
        number_of_guesses++;
    } while(random != guess);


    printf("You guessed the number %d right!\n", random);
    printf("Number of guesses: %d\n", number_of_guesses);
    

    return 0;
}

