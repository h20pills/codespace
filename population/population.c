#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    int start size = get_int("start size: ");

    // Prompt user for end size
    int end size = get_int("end size: ");

    // Perform calculation
    printf("%i\n", start size + end size);
}
