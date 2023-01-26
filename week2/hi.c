#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string words[2];

   words[0] = "HI!";
   words[1] = "BYE!";

   printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
   printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}

// Code used to show terminal command "clang -o" and show examples of the process of compiling //
// Code also used to show about string that are an array of char //
// It can be useful to get specific chars from a string //