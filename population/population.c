#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("Start size: ");
while (n < 9)
{
  n = get_int("Start size: ");
}
while (n < 9)
{
    get_int("End size: ");
}
    printf("Years: %i", (n / 3) - (n / 4) + n);
}