#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int x = get_string("x: ");

    // Prompt user for end size
    int y = get_string("y: ");

    // Perform calculation
    printf("$i\n", x + y);
}
