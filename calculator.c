#include <cs50.h>
#include <stdio.c>

int main(void)
{
   int x = get_int("x: ");
   int y = get_int("y: ");
   printf("%i\n", x + y);
}