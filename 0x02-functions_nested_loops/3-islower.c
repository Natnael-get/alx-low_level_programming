#include "main.h"

/**
 * _is lower -  returns 1 if c is lowercase
 * @c: contanins value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

if (c > 'a' &&  c < 'z')
{
return (1);
}
else
{
return (0);
}

}
