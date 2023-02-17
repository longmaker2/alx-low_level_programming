#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - main block
 * Return: 0
 * added nothing 
 */

int main(void)
{
int last_num;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_num = n % 10;
if (last_num > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
}
else if (last_num == 0)
{
printf("Last digit of %d is 0 and is 0\n", n);
}
else if (last_num < 6 && last_num != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
}

return (0);
}
