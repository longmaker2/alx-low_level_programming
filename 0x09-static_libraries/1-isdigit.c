#include "main.h"
/**
  * _isdigit - Check if a value is a digit
  * @c: The number to be checked
  *
  * Return: 1 for digit or 0 for any else
  */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
