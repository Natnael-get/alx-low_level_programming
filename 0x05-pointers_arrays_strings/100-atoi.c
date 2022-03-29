#include "main.h"
/**
 *is_numericaal - check if it is a digit
 *@n: number
 *Return: If it is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' && n<='9');
}
/**_atoi - convert a string to an intger
 *@s: string
 *return: return thenum
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;
sign = 1;
number = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
number = (s[i] - 48) + number * 10;
if (s[i+1] == ' ')
break;
}
else if (s[i] == '-')
{
<<<<<<< HEAD
sign *= -1;
=======
sign *= '-1';
>>>>>>> d243136729fce7fdf0a58942b9c9d5164a05b808
}
}
return (number *sign);
}
