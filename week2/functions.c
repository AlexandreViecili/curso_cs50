// FUNCTIONS ADD and MULTIPLY //
// Code asked to do in the functions shorts video //
// The goal was to do a function that multiply two floats and another one that adds two integers //
// The functions worked fine and was very similar to some examples that were shown in the video later //
// I took the liberty and implemented a choose option between add and multiply //

#include <cs50.h>
#include <stdio.h>

int add(int a, int b);
float multiply(float a, float b);

int main (void)
{
    int question;
    do
    {
        question = get_int("Addtion press 1, multiplication press 2. ");
        if (question < 1 || question > 2)
        {
            printf("Invalid option, please give 1 or 2.\n");
        }
    }
    while (question < 1 || question > 2);

    if (question == 1)
    {
        int firstInt = get_int("First number: ");
        int secondInt = get_int("Second number: ");
        printf("Result: %i\n", add(firstInt, secondInt));
    }
    else
    {
        float first = get_float("First number: ");
        float second = get_float("Last number: ");
        printf("Result: %f\n", multiply(first, second));
    }
}

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

float multiply(float a, float b)
{
    float result = a * b;
    return result;
}