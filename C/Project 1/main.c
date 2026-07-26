#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number
    int random_number = (rand()%100)+1;
    int no_of_guesses=0;
    int guessed;
do
{
    printf("Guess the number");
    scanf("%d",&guessed);
    if (guessed>random_number)
    {
       printf("Lower number please!\n");
    }
    else
    {
        printf("Higher number please!\n");
    }
    no_of_guesses++;
     } while (guessed!=random_number);
     printf("You guess the number in %d guesses",no_of_guesses);

    return 0;
}
