#include <stdio.h>

int main(void)
{
    for (int i = 0; i <=3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
}

// Using printf as a debugger to find out why is printing 4 "#" and not 3 //
// The problem is that the count starts at 0, not 1, one way to solve this is changing the "i <= 3 inside the for condition to "i < 3" //
// Explained about debuggers and showed and explained the terminal command "debug50" //