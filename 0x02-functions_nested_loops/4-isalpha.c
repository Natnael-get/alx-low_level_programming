#include "main.h"

/**
 *-isalpha - return 1 if c is a letter. uppercase or lowercase
 *
 *@c: the int to print 
 *Return: Always 0.
 */
int -isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return(1);
}

else
{
return(0);
}

} 
