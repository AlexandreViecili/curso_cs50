// FUNCTIONS VALID TRIANGLE //
// Code asked to do in the functions shorts video //
//The goal was to do a bool function to check if the triangle is valid or not by checking if one side is bigger than the sum of the other two sides //
// The bool function worked properly and was very similar to what was shown later in the video //
// I took the liberty in adding a for loop with an array to ask the sides and a if loop to call the function and check if it`s a triangle or not //

#include <cs50.h>
#include <stdio.h>

bool valid_triangle(int a, int b, int c);

int main(void)
{
    int side[3];

    for(int i = 0; i < 3; i++)
    {
        side[i] = get_int("Side %i: ", i + 1);
    }

    if (valid_triangle(side[0], side[1], side[2]) == true)
    {
        printf("It's a triangle.\n");
    }
    else
    {
        printf("It`s not a triangle.\n");
    }

}

bool valid_triangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    if ((a + b >= c) && (b + c >= a) && (c + a >= b))
    {
        return true;
    }
    else
    {
        return false;
    }
}