#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

/**
 * type_prompt - Displays prompt on screen.
 * Return: N/A
 */

void type_prompt(void)
{
	static int first_time = 1;

	if (first_time) /* clear screen for the first time */
	{
		const char *CLEAR_SCREEN_ANSI = " \e[1;1H\e[2J";

		write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
		first_time = 0;
	}
	printf("#");	/* display prompt */
}
