#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for start size
    string answer = get_string("start size:");
    int n = get_int("n: ");

    // Prompt user for end size
    int endsize = get_int("endsize: ");

    // Perform calculation
    printf("years: %i\n", n + n / 3 - n / 4);
}