// Project: Snake Water Gun
// A rock-paper-scissors game against the computer. Snake drinks water, water
// drowns gun, gun shoots snake.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int computer = rand() % 3, player;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
    printf("Choose 0 for Snake, 1 for Water and 2 for Gun\n");
    scanf("%d", &player);
    if (player < 0 || player > 2)
    {
        printf("Invalid choice!\n");
        return 1;
    }
    printf("Computer chose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw!\n");
        
    }
    else if (player == 0 && computer == 1)
    {
        printf("You win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
         printf("You lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
       printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
       printf("You win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 1)
    {
          printf("You lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
      printf("Its a Draw!\n");
    }

    return 0;
}
