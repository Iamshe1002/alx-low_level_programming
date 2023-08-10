#include "main.h"
#include<stdio.h>

/**
 * main - prints the name of program
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
/*Declaring variales*/
int count = 0;

if (argc > 0)
{
/*WHILE - print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
