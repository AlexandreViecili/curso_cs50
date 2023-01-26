//Array example //

#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int lenght, int array []);

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("The average is: %f\n", average(N, scores));
}

float average(int lenght, int array [])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        // Sintatic sugar expression, means the same as "sum = sum + array[i];" //
        sum += array[i];
    }
    return sum / (float) lenght;
}