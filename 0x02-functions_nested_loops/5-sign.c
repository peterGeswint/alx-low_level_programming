#include "main.h"

/**
 * print _sign - prit the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if  is greater than zero
 * 0 and prints 0 id n is zero
 */

int print_sign(int n)
{
if(n > 0)
{
 _putchar('+');
 return(1);
}
else if(n ==0)
{
 _putchar(48);
 return(0);
}
else if(n < 0)
{
 _putchar('-');

}
 return(-1);

}

