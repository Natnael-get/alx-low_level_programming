#include "main.h"

/**
 *print_aphabet
 *
 *Return:Always 0.
 */

void print_alphabet_x10(void)
{
int alphabet;
int times;

for (times = 0 ; times < 10 ; times++)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}


}

