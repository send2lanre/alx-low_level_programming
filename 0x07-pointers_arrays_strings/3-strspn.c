#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, supposed_count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
		supposed_count++;
		if (count == 0 || count != supposed_count)
			break;
	}
	return (count);
}
