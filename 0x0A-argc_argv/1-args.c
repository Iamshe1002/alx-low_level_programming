#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of program
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
