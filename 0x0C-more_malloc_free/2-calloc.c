#include "main.h"
#include<stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: b if true, if it fails NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(sizeof(char) * (nmemb * size));

	if (b == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		b[i] = 0;
	}
	return (b);
}

