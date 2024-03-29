#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

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
