#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of every word in a string
 * @s: Input string
 * Return: s, but with the first letter of every word capitalized
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	/**
	 * This array contains ASCII characters reperesenting an element of
	 * writing that breaks up words.
	 */
	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;

	i++;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == sep[j])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
