#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int startsize = get_int("startsize: ");

    // Prompt user for end size
    int y = get_int("y: ");

    // Perform calculation
    printf("%i\n", startsize + y);
}
