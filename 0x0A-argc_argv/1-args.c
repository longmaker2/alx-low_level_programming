#include<stdio.h>
/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
int i, sum;

(void)argc;
for (i = 0; argv[i] != NULL; i++)
{
sum += 1;
}
printf("%d\n", sum - 1);
return (0);
}
