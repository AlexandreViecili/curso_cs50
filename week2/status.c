#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Miising command-line argument\n");
        return 1;
    }
    else
    {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }
}

// Code used to show how to give error messages and codes to the user //