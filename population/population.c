#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int x = get_int("x: ");

    // Prompt user for end size
    int y = get_int("y: ");

    // Perform calculation
    printf("$i", $x + y);
}
