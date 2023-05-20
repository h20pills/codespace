#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int n = get_int("start size: ");

    // Prompt user for end size
    int y = get_int("end size: ");

    // Perform calculation
    printf("years: %i\n", n  + n / 3 - n / 4);
}