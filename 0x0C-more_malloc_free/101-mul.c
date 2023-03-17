#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_digits - check if a string is composed of only digits
 * @str: string to check
 *
 * Return: 1 if composed of only digits, 0 otherwise
 */
int check_digits(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

/**
 * mul - multiply two positive numbers
 * @num1: first number
 * @num2: second number
 */
void mul(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, k, carry, n1, n2, sum;
    int *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';
        k = len2 - 1;

        for (j = len1 - 1 + k - i; j >= k; j--)
        {
            n2 = num2[j - k] - '0';
            sum = n1 * n2 + carry + result[j];
            carry = sum / 10;
            result[j] = sum % 10;
        }
        if (carry > 0)
            result[j] += carry;
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
        printf("0\n");
    else
    {
        for (; i < len1 + len2; i++)
            printf("%d", result[i]);
        printf("\n");
    }
    free(result);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    char *num1, *num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!check_digits(argv[1]) || !check_digits(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    mul(num1, num2);

    return (0);
}
