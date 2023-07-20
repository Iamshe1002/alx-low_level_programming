#include "main.h"

/**
 * main - Determine if a number is positive, negative, or zero.
 * 0 : is the number to be checked
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
	if (i >  0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf(" ");
}

