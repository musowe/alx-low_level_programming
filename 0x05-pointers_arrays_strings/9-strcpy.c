#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string from one pointer to another
 *    including the terminating null byte (\0)
 *
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 *
 * Return: pointer to dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
}
