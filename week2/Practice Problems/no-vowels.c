// PRACTICE PROBLEM N0-V0W3LS //
// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string a);

int main(int argc, string argv[2])
{
    if (argc != 2)
    {
        printf("Missinng command-line argument\n");
        return 1;
    }
    printf("%s\n", replace(argv[1]));
}

string replace(string a)
{
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        switch (a[i])
        {
        case 'a':
            a[i] = '6';
            break;

        case 'e':
            a[i] = '3';
            break;

        case 'i':
            a[i] = '1';
            break;

        case 'o':
            a[i] = '0';
            break;
        }
    }
    return a;
}