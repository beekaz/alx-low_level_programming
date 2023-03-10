#include "main.h"
#include <stdio.h>
/**
 *  _strpbrk - gets a string for any set of bytes
 *
 *   @s: its a pointer to a string
 *  @accept: its the set of byte to look out for
 *
 *  Return: a pointer to the byte in s or 0 if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
