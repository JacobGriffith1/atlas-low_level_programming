#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

/**
 * read_command - Reads and parses contents of user input.
 * @cmd: Commands.
 * @par: Parameters.
 * Return: N/A
 */

void read_command(char cmd[], char *par[])
{
	char line[1024];
	int count = 0, i = 0, j = 0;
	char *array[100], *pch;

	for (;;)        /* Read one line */
	{
		int c = fgetc(stdin);

		line[count++] = (char) c;

		if (c == '\n')
			break;
	}
	if (count == 1)
		return;
	pch = strtok(line, " \n");

	while (pch != NULL)     /* Parse the line into words */
	{
		array[i++] = strdup(pch);
		pch = strtok(NULL, " \n");
	}

	strcpy(cmd, array[0]);

	for (; j < i; j++)
		par[j] = array[j];
	par[i] = NULL;  /* NULL-terminate the parameter list */
}

/**
 * type_prompt - Displays prompt on screen.
 * Return: N/A
 */

void type_prompt(void)
{
	static int first_time = 1;

	if (first_time) /* clear screen for the first time */
	{
		const char *CLEAR_SCREEN_ANSI = " \033[1;1H\033[2J";

		write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
		first_time = 0;
	}
	printf("#");    /* display prompt */
}

/**
 * main - main
 * Return: 0
 */

int main(void)
{
	char cmd[100], command[100], *parameters[20];
	char *envp[] = {(char *) "PATH=/bin", 0};	/* environment variable */

	while (1)	/* repeat forever */
	{
		type_prompt();	/* display prompt on screen */
		read_command(command, parameters);	/* read input from terminal */
		if (fork() != 0)	/* parent */
			wait(NULL);	/* wait for child */
		else
		{
			strcpy(cmd, "/bin/");
			strcat(cmd, command);
			execve(cmd, parameters, envp);	/* execute command */
		}
		if (strcmp(command, "exit") == 0)
			break;
	}
	return (0);
}
