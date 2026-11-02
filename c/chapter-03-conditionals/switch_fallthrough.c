// Topic: switch statement and fall-through
// Matches user input against cases. Case 2 has no break, so it falls through
// into case 3 and default.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
    case 3:
        printf("You entered 3\n");

    default:
        printf("Nothing matched");
        break;
    }

    return 0;
}

// Note: Intentional: entering 2 prints the messages for 2, 3 and
// 'Nothing matched'. That is fall-through.
