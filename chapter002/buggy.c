#include <cs50.h>
#include <stdio.h>

int getNegativeInt(void);

int main(void)
{
    int i = getNegativeInt();
    printf("%i\n", i);
}

int getNegativeInt(void)
{
    int n;
    do
    {
        n = get_int("negative integer: ");
    }
    while (n < 0);
    return n;
}