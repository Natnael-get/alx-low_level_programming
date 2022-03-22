#include "main.h"
/**
 *_strlen - length of a string
 *@s: Apointer to an int that will be  changed
 *Return: returns the value of u
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
