// Topic: free()
// Releases memory obtained from malloc()/calloc() so it can be reused.
// Note: After free(ptr), ptr still holds the old address. Set it to NULL and
//       never read through it.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("How many ints? (2 or more): ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;

    printf("%d\n", ptr[0]);
    free(ptr);   // memory goes back to the system
    ptr = NULL;  // good habit: ptr no longer points to valid memory
    // printf("%d\n", ptr[0]);  <- reading freed memory is undefined behaviour

    return 0;
}
