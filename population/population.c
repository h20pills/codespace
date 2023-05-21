#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Prompt user for start size
    int n = get_int("Start size: ");
while (true)
;
{
    if (n < 9)
    get_int("Start size: ");
    int y = get_int("End size: ");

    // Perform calculation
    printf("Years: %i", (n / 3) - (n / 4) + n);
}