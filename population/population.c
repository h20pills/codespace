#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("Start size: ");
    int y = get_int("End size: ");
if (n < 9)
    get_int("Start size: ");
else
    {get_int("End size: ");
    }
    printf("Years: %i", (n / 3) - (n / 4) + n);
}
