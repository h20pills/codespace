#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int startsize = get_int("startsize: ");

    // Prompt user for end size
    int endsize = get_int("endsize: ");

    // Perform calculation
    printf("years: %i\n", startsize + startsize / 3 - startsize / 4);
}
