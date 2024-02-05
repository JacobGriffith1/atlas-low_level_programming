#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into "leetspeak"
 * @s: Input string
 * Return: s, but 1337
 */

char *leet(char *s)
{
	int i = 0, j;
	int low[] = {97, 101, 111, 116, 108};
	int upp[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == low[j] || *(s + i) == upp[j])
			{
				*(s + i) = num[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
