#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@l: letter being tested
 * Return: Always 0
 */

int _islower(int l)
{

if (l >= 97 && l <= 122)
return (1);
else
return (0);
}
